#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream arq("gpl.txt");
    ofstream copia("copia.txt");
    string linha;

    while(getline(arq, linha)){
        copia << linha << endl;
    }
}