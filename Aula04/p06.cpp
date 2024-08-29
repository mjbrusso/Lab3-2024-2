#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
  unordered_map<string, float> precos;
  precos["banana"] = 4.5;
  precos["maçã"] = 12.0;
  precos["pastel"] = 10;
  precos["guaraná"] = 8.0;

  string p;
  while (true) {
    for (auto [k, v] : precos) 
        cout << k << '\t' << v << endl;
    cout << "Nome do produto? ";
    cin >> p;
    if (p == "FIM") break;
    
    if(precos.count(p)==0)
        cout << "Não achou, sua anta!\n";
    else
        cout << "Preço: " << precos[p] << endl << endl;
  }
}