#include "stack.hpp"
#include <iostream>

using namespace std;

int main(){
    lab3::stack<double> pilha;
    pilha.push(1.5);
    pilha.push(2.0);
    pilha.push(99.5);
    
    while(!pilha.empty()){        
        cout << "Size: " << pilha.size() 
             << " Top: " << pilha.top() << endl;
        pilha.pop();
    }    
}
