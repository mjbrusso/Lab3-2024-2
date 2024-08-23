#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<string> cidades;
    cidades.push_back("Passo Fundo");
    cidades.push_back("Marau");
    cidades.push_front("Carazinho");
    cidades.push_front("Erechim");

    for (auto cid : cidades)
        cout << cid << endl;

    cidades.pop_front();
    cout << "Size: "
         << cidades.size()
         << " Primeira: "
         << cidades.front()
         << " Última: "
         << cidades.back()
         << endl;
    cidades.remove("Marau");
    for (auto cid : cidades)
        cout << cid << endl;
}
