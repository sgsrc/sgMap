#include "sgapplication.hpp"

static sgapplication s_global_app;

sgapplication &get_global_app() {
    return s_global_app;
}

