#include <iostream>
#include "dog.hpp"
#include "cat.hpp"
#include "pet.hpp"

using namespace lab3;

int main(){
    pet *mypet;

    int op;
    std::cout << "1) Cão\n2) Gato\nEscolha: ";
    std::cin >> op;
    if(op==1){
        mypet = new dog("Fred");
    }else{
        mypet = new cat("Fred");
    }
    mypet->speak();

    delete mypet;
}
