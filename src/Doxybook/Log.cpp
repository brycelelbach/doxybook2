#include <Doxybook/Log.hpp>
#include <iostream>
#include <rang.hpp>

static bool quiet = false;

void Doxybook2::Log::i(const std::string& msg) {
    if (::quiet) {
        return;
    }
    std::cout << msg << std::endl;
}

void Doxybook2::Log::w(const std::string& msg) {
    std::cerr << rang::fg::yellow << msg << rang::fg::reset << std::endl;
}

void Doxybook2::Log::e(const std::string& msg) {
    std::cerr << rang::fg::red << msg << rang::fg::reset << std::endl;
}

void Doxybook2::Log::setQuietMode(const bool quiet) {
    ::quiet = quiet;
}
