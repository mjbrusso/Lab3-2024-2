#include <iostream>
#include <set>

using namespace std;

int main(){
    set<string> nomes;

    nomes.insert("aula");
    nomes.insert("code");
    nomes.insert("terminal");
    nomes.insert("aula");
    nomes.insert("file");
    nomes.insert("edit");
    nomes.insert("selection");
    nomes.insert("code");

    cout << nomes.size() << endl;
    for(auto s: nomes) 
        cout << s << endl;
}