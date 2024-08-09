#include <iostream>
#include <algorithm>

using namespace std;

struct camiseta
{
    string nome;
    string cor;
    string tamanho;
};

int main()
{
    bool firstcase=true;
    int n;

    while(cin >> n && n!=0){
        if(!firstcase) cout << endl;
        firstcase = false;
        
        camiseta vet[n];
        for(int i=0; i<n; i++){
            cin.ignore();
            getline(cin, vet[i].nome);
            cin >> vet[i].cor;
            cin >> vet[i].tamanho;
        }

        sort(vet, vet+n, 
            [](auto c1, auto c2)
            { return c1.cor < c2.cor 
              || (c1.cor==c2.cor && c1.tamanho > c2.tamanho)
              || (c1.cor==c2.cor && c1.tamanho == c2.tamanho && c1.nome < c2.nome);}
        );

        for(int i=0; i<n; i++){
            cout << vet[i].cor << ' '
                 << vet[i].tamanho << ' '
                 << vet[i].nome << endl;
        }
        
    }
}