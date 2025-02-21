#include <pybind11/pybind11.h>
#include <../lib/strUtils.h>

namespace py = pybind11;

int add(int i, int j) {
    return i + j;
}

int sub(int i, int j) {
    return i - j;
}

void hello(std::string name) {
    std::string msg = "Hello " + name;
    py::print(msg);
}


PYBIND11_MODULE(experiment, m) {
    m.doc() = "test module";

    m.def("add", &add, "A function which adds two numbers");
    m.def("sub", &sub, "A function which subtracts two numbers");
    m.def("hello", &hello, "A function which prints hello");

    m.def("reverse_string", &strUtils::reverse_string, "A function which reverses a string");
    m.def("to_uppercase", &strUtils::to_uppercase, "A function which converts a string to uppercase");
    m.def("is_palindrome", &strUtils::is_palindrome, "A function which checks if a string is a palindrome");
}
