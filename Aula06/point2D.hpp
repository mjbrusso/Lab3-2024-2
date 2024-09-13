// Minha primeira classe.
#include <ostream>

namespace lab3 {

class point2D {
  // Atributos (privados)
  int m_x, m_y;

 public:
  // Construtores
  point2D() : m_x{0}, m_y{0} {}

  point2D(int px, int py) : m_x{px}, m_y{py} {}

  // Métodos
  // getter
  int x() const { return m_x; }
  int y() const { return m_y; }

  // setter
  void set_x(int nx) { m_x = nx; }
  void set_y(int ny) { m_y = ny; }
};

double operator-(const point2D& lhs, const point2D& rhs);

std::ostream &operator<<(std::ostream &os, const point2D& p);


}  // namespace lab3