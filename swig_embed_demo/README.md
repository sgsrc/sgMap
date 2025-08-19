SWIG-embedded Python demo for `sgapplication`

Contents:
- `include/sgapplication.hpp`: Minimal C++ class
- `src/sgapplication.cpp`: Implementation
- `src/app_singleton.cpp`: Defines global instance and accessor
- `src/c_api.h`, `src/c_api.cpp`: C API exposing a subset of methods
- `swig/application.i`: SWIG interface mapping to a Python `application` class
- `src/main_embed.cpp`: C++ executable embedding Python, injecting `app_instance`
- `scripts/test_app.py`: Sample Python script using `app_instance`
- `Makefile`: Build wrapper and executable

Build and run:

1) Ensure dependencies are installed: swig, python3, python3-dev, build-essential

2) Build
   make -C /workspace/swig_embed_demo

3) Run
   ./bin/embed_app scripts/test_app.py

This embeds Python, preloads the `application` module, injects `app_instance`, and executes the given script.

