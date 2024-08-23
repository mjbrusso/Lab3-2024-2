#include <iostream>
#include <queue>

using namespace std;

struct pessoa {
  string nome;
  string email;
};

int main() {
  queue<pessoa> fila;
  pessoa p;

  while (true) {
    cout << "1) Insere\n"
         << "2) Retira\n"
         << "0) Sair\n"
         << "Selecione: ";
    int op;
    cin >> op;
    switch (op) {
      case 1:
        cin.ignore();
        cout << "Nome: "; getline(cin, p.nome);
        cout << "eMail: "; getline(cin, p.email);
        fila.push(p);
        break;
      case 2:
        if(fila.empty())
            cout << "Fila vazia!\n";
        else{
            cout << "Saiu da fila: " 
                 << fila.front().nome
                 << endl;
            fila.pop();
        }
        break;
      case 0:
        return 0;
      default:
        cout << "Opção inválida!\n";
        break;
    }
  }
}
