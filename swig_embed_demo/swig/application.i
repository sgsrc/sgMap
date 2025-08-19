%module application

%{
#include "c_api.h"
%}

%include <cpointer.i>

// Map the opaque handle to a class-like proxy named "application"
%inline %{
typedef void* app_handle_t;

class application {
public:
    application() : handle(app_instance_get()) {}
    ~application() {}

    void set_title(const char* title) { app_set_title(handle, title); }
    const char* get_title() { return app_get_title(handle); }
    int add(int a, int b) { return app_add(handle, a, b); }
    void log(const char* msg) { app_log(handle, msg); }

private:
    app_handle_t handle;
};
%}

