cmake_minimum_required(VERSION 3.16)

project(
  ${SKBUILD_PROJECT_NAME}
  VERSION ${SKBUILD_PROJECT_VERSION}
  LANGUAGES CXX)

find_package(Python REQUIRED COMPONENTS Interpreter Development.Module)
find_package(pybind11 CONFIG REQUIRED)


pybind11_add_module(experiment src/main.cpp)
target_link_libraries(experiment PRIVATE pybind11::pybind11)
target_compile_definitions(experiment PRIVATE VERSION_INFO=${PROJECT_VERSION})

install(TARGETS experiment DESTINATION ${SKBUILD_PLATLIB_DIR})