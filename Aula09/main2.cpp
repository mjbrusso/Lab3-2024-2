#include "stack.hpp"
#include <iostream>

using namespace std;

void foo(lab3::stack<int> p){

}

int main(){
    lab3::stack<double> pilha;
    pilha.push(555.0);

    pilha = pilha;
    
    if(true){
        lab3::stack<double> p2;
        p2 = pilha;
    }

    pilha.push(100);
}
