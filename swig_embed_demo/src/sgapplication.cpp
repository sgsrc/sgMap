#include "sgapplication.hpp"
#include <iostream>

sgapplication::sgapplication() : m_title("untitled") {}

sgapplication::~sgapplication() {}

void sgapplication::set_title(const std::string &title) {
    m_title = title;
}

std::string sgapplication::get_title() const {
    return m_title;
}

int sgapplication::add(int a, int b) const {
    return a + b;
}

void sgapplication::log(const std::string &message) {
    m_logs.push_back(message);
    std::cout << "[sgapplication] " << message << std::endl;
}

