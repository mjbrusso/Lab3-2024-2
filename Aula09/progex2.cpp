#include <iostream>
#include <stdexcept>

using namespace std;

int main(){
    int valor;
    try{
        cout << "Digite um valor: ";
        cin >> valor;
        if(valor < 0)
            throw invalid_argument("Menor que zero");
        if(valor==0)
            throw logic_error("Igual a zero");
        cout << valor * 2 << endl;
    }
    catch(exception &e){
        cout << e.what() << endl;
    }
}
