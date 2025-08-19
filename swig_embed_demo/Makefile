CXX := g++
CC := gcc
PYTHON_CONFIG := python3-config
PYTHON := python3
SWIG := swig

PY_CFLAGS := $(shell $(PYTHON_CONFIG) --includes)
PY_LDFLAGS := $(shell $(PYTHON_CONFIG) --embed --ldflags 2>/dev/null || $(PYTHON_CONFIG) --ldflags)

CXXFLAGS := -std=c++17 -fPIC -Iinclude -Isrc -Iswig $(PY_CFLAGS) -O2 -g
LDFLAGS := $(PY_LDFLAGS)

BUILD_DIR := build
BIN_DIR := bin
OBJ_DIR := $(BUILD_DIR)/obj

SRCS := src/sgapplication.cpp src/app_singleton.cpp src/c_api.cpp
OBJS := $(SRCS:src/%.cpp=$(OBJ_DIR)/%.o)

WRAP_SRC := swig/application.i
WRAP_OUT := $(BUILD_DIR)/application_wrap.cxx
WRAP_OBJ := $(OBJ_DIR)/application_wrap.o

APP_EXE := $(BIN_DIR)/embed_app

.PHONY: all clean run

all: $(APP_EXE)

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)
	mkdir -p $(OBJ_DIR)/src


$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(WRAP_OUT): $(WRAP_SRC) src/c_api.h | $(BUILD_DIR)
	$(SWIG) -c++ -python -Iinclude -Isrc -o $(WRAP_OUT) $(WRAP_SRC)

$(OBJ_DIR)/%.o: src/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJ_DIR)/application_wrap.o: $(WRAP_OUT)
	$(CXX) $(CXXFLAGS) -c $(WRAP_OUT) -o $@

$(APP_EXE): $(BIN_DIR) $(OBJS) $(WRAP_OBJ) src/main_embed.cpp
	$(CXX) $(CXXFLAGS) -o $(APP_EXE) $(OBJS) $(WRAP_OBJ) src/main_embed.cpp $(LDFLAGS)

run: $(APP_EXE)
	$(APP_EXE) scripts/test_app.py | cat

clean:
	rm -rf $(BUILD_DIR) $(BIN_DIR)

