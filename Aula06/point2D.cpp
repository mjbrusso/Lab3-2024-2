#include "point2D.hpp"
#include <iostream>
#include <cmath>

namespace lab3 {
double operator-(const point2D& lhs, const point2D& rhs){
  int dx = lhs.x() - rhs.x();
  int dy = lhs.y() - rhs.y();

  return std::sqrt(dx*dx + dy*dy);
}

std::ostream &operator<<(std::ostream &os, const point2D& p){
    os << "(" << p.x() << ", " << p.y() << ")";
    return os;
}
}  // namespace lab3
