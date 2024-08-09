#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int vet[5]{10, 10, 30, 5, 100};

    cout << count(vet, vet+5, 10) << endl;

    cout << count(begin(vet), end(vet), 10) << endl;
    int v;
    cout << "Procurar: "; cin >> v;
    auto it = find(begin(vet), end(vet), v);
    if(it==end(vet)){
        cout << "Not found\n";
    }
    else{
        cout << "Found!\n";
        *it *= 1000;
    }
}