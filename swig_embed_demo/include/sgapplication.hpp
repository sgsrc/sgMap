#pragma once

#include <string>
#include <vector>

class sgapplication {
public:
    sgapplication();
    ~sgapplication();

    void set_title(const std::string &title);
    std::string get_title() const;

    int add(int a, int b) const;
    void log(const std::string &message);

private:
    std::string m_title;
    std::vector<std::string> m_logs;
};

// Global singleton accessor (not exposed directly to SWIG)
sgapplication &get_global_app();

