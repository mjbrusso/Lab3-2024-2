#include <iostream>
#include <utility>

int main()
{
    int a = 10, b = 5;

    std::swap(a, b);
    std::cout << a << ' ' << b << std::endl;

    float x = 1.5, y = 3.3;
    std::swap(x, y);
    std::cout << x << ' ' << y << std::endl;

    std::string s1 = "eu", s2 = "você";
    std::swap(s1, s2);
    std::cout << s1 << ' ' << s2 << std::endl;
}
