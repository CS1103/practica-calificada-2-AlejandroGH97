#include <iostream>

#define CATCH_CONFIG_MAIN
#include "catch2.h"
#ifndef CATCH_CONFIG_MAIN
#define UNIT_TEST


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
#endif