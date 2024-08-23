#include <iostream>
#include <stack>

using namespace std;

int main() {
  stack<float> pilha;

  pilha.push(1.5);
  pilha.push(2.0);
  pilha.push(99.9);
  pilha.push(-3.7);

  while (!pilha.empty())  // Enquanto não estiver vazia
  {
    cout << "Tamanho: " 
         << pilha.size()
         << " Topo: " 
         << pilha.top()  // valor do topo
         << endl;

    pilha.pop();  // Desempilha
  }
}
