#include "c_api.h"
#include "sgapplication.hpp"
#include <string>

extern "C" {

static std::string g_title_buffer;

app_handle_t app_instance_get() {
    return reinterpret_cast<app_handle_t>(&get_global_app());
}

void app_set_title(app_handle_t handle, const char* title) {
    if (!handle) return;
    sgapplication* app = reinterpret_cast<sgapplication*>(handle);
    app->set_title(title ? std::string(title) : std::string());
}

const char* app_get_title(app_handle_t handle) {
    if (!handle) return "";
    sgapplication* app = reinterpret_cast<sgapplication*>(handle);
    g_title_buffer = app->get_title();
    return g_title_buffer.c_str();
}

int app_add(app_handle_t handle, int a, int b) {
    if (!handle) return 0;
    sgapplication* app = reinterpret_cast<sgapplication*>(handle);
    return app->add(a, b);
}

void app_log(app_handle_t handle, const char* message) {
    if (!handle) return;
    sgapplication* app = reinterpret_cast<sgapplication*>(handle);
    app->log(message ? std::string(message) : std::string());
}

}

