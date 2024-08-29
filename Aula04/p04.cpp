#include <iostream>
#include <map>

using namespace std;

int main(){
    map<int, string> alunos;

    alunos[198204] = "Matheus";
    alunos[198853] = "Thiago";
    alunos[197402] = "Brenda";

    cout << alunos.size() << " alunos\n";
    for(auto [mat, nome] : alunos){
        cout << mat << '\t' << nome << endl;
    }
}