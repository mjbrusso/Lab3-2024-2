#include <iostream>

using namespace std;

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

  // Outros métodos
  void print() const{
    cout << "(" << m_x << ", " << m_y << ")\n";
  }
};

int main() {
  point2D p, p2(23, 75);

  p.print();
  p2.print();
}
