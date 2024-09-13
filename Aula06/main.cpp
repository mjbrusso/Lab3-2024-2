#include <iostream>

#include "point2D.hpp"

int main() {
  lab3::point2D p, p2(23, 75);
  double dist = p2 - p;
  std::cout << "A distância entre " << p << " e " << p2 << " é " << dist
            << '\n';

}
