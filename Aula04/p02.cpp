#include <iostream>
#include <set>

using namespace std;

int main() {
  set<string> placas;
  string p;

  cout << "Digite as placas dos veículos (FIM para sair)\n";
  while (cin >> p && p != "FIM") {
    placas.insert(p);
  }

  cout << placas.size() << " veículos distintos:\n";
  for (auto v : placas) {
    cout << v << endl;
  }

  cout << "Placa?";
  cin >> p;
  // if (placas.find(p) != placas.end())
  if(placas.count(p)!=0)
    cout << "Found\n";
  else
    cout << "Not Found\n";
}

/*

AAA1111
BBB2222
ZZZ9999
BBB2222
AAA1111
FIM

*/