#include <Python.h>
#include <iostream>
#include <memory>
#include <vector>
#include <string>

// Forward declare SWIG module init function (provided by application_wrap)
extern "C" PyObject* PyInit__application(void);

static void set_argv_on_interpreter(const std::vector<std::string>& args) {
    std::vector<wchar_t*> wargv;
    wargv.reserve(args.size());
    for (const auto& a : args) {
        wchar_t* wa = Py_DecodeLocale(a.c_str(), nullptr);
        wargv.push_back(wa);
    }
    PySys_SetArgvEx(static_cast<int>(wargv.size()), wargv.data(), 0);
    for (auto* p : wargv) { PyMem_RawFree(p); }
}

int main(int argc, char** argv) {
    if (argc < 2) {
        std::cerr << "Usage: embed_app <script.py> [args...]" << std::endl;
        return 1;
    }

    // Register the SWIG module BEFORE initializing Python
    PyImport_AppendInittab("_application", PyInit__application);
    // Initialize Python
    Py_Initialize();

    // Prepend our build directory to sys.path so 'application.py' can be imported
    PyObject* sysPath = PySys_GetObject("path");
    PyObject* buildDir = PyUnicode_FromString("/workspace/swig_embed_demo/build");
    if (sysPath && buildDir) {
        PyList_Insert(sysPath, 0, buildDir);
    }
    Py_XDECREF(buildDir);

    // Load the built-in module
    PyObject* internalModule = PyImport_ImportModule("_application");
    if (!internalModule) {
        PyErr_Print();
        std::cerr << "Failed to import _application module" << std::endl;
        return 2;
    }
    // Import the high-level Python proxy module that defines class 'application'
    PyObject* pyProxyModule = PyImport_ImportModule("application");
    if (!pyProxyModule) {
        PyErr_Print();
        std::cerr << "Failed to import application proxy module" << std::endl;
        return 2;
    }
    Py_DECREF(internalModule);

    // Prepare globals for the script
    PyObject* mainModule = PyImport_AddModule("__main__");
    PyObject* mainDict = PyModule_GetDict(mainModule);

    // Create an application instance via SWIG wrapper
    PyObject* appModule = PyImport_ImportModule("application");
    if (!appModule) {
        PyErr_Print();
        std::cerr << "Failed to import application module" << std::endl;
        return 2;
    }

    PyObject* appClass = PyObject_GetAttrString(appModule, "application");
    Py_DECREF(appModule);
    if (!appClass) {
        PyErr_Print();
        std::cerr << "No class 'application' in module" << std::endl;
        return 3;
    }
    PyObject* appInstance = PyObject_CallObject(appClass, nullptr);
    Py_DECREF(appClass);
    if (!appInstance) {
        PyErr_Print();
        std::cerr << "Failed to construct application" << std::endl;
        return 4;
    }

    // Inject as global
    if (PyDict_SetItemString(mainDict, "app_instance", appInstance) != 0) {
        PyErr_Print();
        std::cerr << "Failed to set app_instance" << std::endl;
        Py_DECREF(appInstance);
        return 5;
    }
    Py_DECREF(appInstance);

    // Expose sys.argv
    std::vector<std::string> pyargs;
    for (int i = 1; i < argc; ++i) pyargs.emplace_back(argv[i]);
    set_argv_on_interpreter(pyargs);

    // Execute the target script
    const char* scriptPath = argv[1];
    FILE* fp = fopen(scriptPath, "r");
    if (!fp) {
        std::cerr << "Cannot open script: " << scriptPath << std::endl;
        Py_Finalize();
        return 6;
    }

    int rc = PyRun_SimpleFileEx(fp, scriptPath, 1);
    if (rc != 0) {
        PyErr_Print();
    }

    Py_Finalize();
    return rc;
}

