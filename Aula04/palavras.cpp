#include <cctype>
#include <fstream>
#include <iostream>
#include <map>

using namespace std;

int main() {
  ifstream arq("gpl.txt");
  ofstream csv("palavras.csv");

  char ch;
  string palavra;
  map<string, int> ocorrencias;

  while (arq.get(ch)) {               // Lê um char por vez do arquivo
    if (isalpha(ch)) {                // É uma letra?
      palavra += tolower(ch);         // concatena letra minúscula
    } else if (palavra.size() > 0) {  // Tem algo na palavra?
      ocorrencias[palavra]++;
      palavra.clear();
    }
  }
  cout << ocorrencias.size() << " palavras distintas\n";

  csv << "\"Palavra\";\"N\"\n";
  for(auto [k, v] : ocorrencias){
    csv << '"' << k << '"' << ';' << v << endl;
  }
}