#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int vet[]{10, 5, -1, 28, 730, 99};
    cout << "Original\n";
    for(auto n : vet)
        cout << n << endl;

    sort(begin(vet), end(vet));  // Ordena ascendente

    cout << "Ordenado\n";
    for(auto n : vet)
        cout << n << endl;

}