#include <iostream>

using namespace std;

int main(){
    int valor;
    try{
        cout << "Digite um valor: ";
        cin >> valor;
        if(valor < 0)
            throw 404;
        if(valor==0)
            throw 0.0;
        cout << valor * 2 << endl;
    }
    catch(int n){
        cout << "Erro: " << n << endl;
    }
    catch(double n){
        cout << "O valor não pode ser zero\n";
    }
}
