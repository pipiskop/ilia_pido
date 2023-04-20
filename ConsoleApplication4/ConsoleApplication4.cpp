#include <iostream>
#include "addition.h"
#include "template_addition.h"

int main() {
    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;
    std::cout << "Sum of integers: " << CustomNamespace::templateAddition(a, b) << std::endl;
    double c, d;
    std::cout << "Enter two doubles: ";
    std::cin >> c >> d;
    std::cout << "Sum of doubles: " << CustomNamespace::templateAddition(c, d) << std::endl;

    std::string e, f;
    std::cout << "Enter two strings: ";
    std::cin >> e >> f;
    std::cout << "Concatenated strings: " << CustomNamespace::templateAddition(e, f) << std::endl;

    return 0;
}
