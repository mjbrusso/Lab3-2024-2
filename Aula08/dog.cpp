#include "dog.hpp"
#include <iostream>

namespace lab3{
void dog::speak() const {
    std::cout << "Woof! I'm " << m_name << std::endl;
}
}
