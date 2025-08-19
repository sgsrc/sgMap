#pragma once

#ifdef __cplusplus
extern "C" {
#endif

// Opaque application handle type for C API
typedef void* app_handle_t;

// Obtain singleton handle
app_handle_t app_instance_get();

// A small subset of functions to expose
void app_set_title(app_handle_t handle, const char* title);
const char* app_get_title(app_handle_t handle);
int app_add(app_handle_t handle, int a, int b);
void app_log(app_handle_t handle, const char* message);

#ifdef __cplusplus
}
#endif

