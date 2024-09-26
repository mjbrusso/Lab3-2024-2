#include "cat.hpp"
#include <iostream>

namespace lab3{
void cat::speak() const {
    std::cout << "Meow! I'm " << m_name << std::endl;
}
}
