#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    unordered_map<int, string> alunos;

    alunos[198204] = "Matheus";
    alunos[198853] = "Thiago";
    alunos[197402] = "Brenda";

    cout << alunos.size() << " alunos\n";
    for(auto [mat, nome] : alunos){
        cout << mat << '\t' << nome << endl;
    }
}