#include <iostream>

using namespace std;

int main() {
    int vet[]={10, 5, 20, 33};
    auto soma = 0; // Inferência de tipo
    auto z = 'A';

    for (auto n : vet) {
        cout << n << endl;
        soma += n;
    }
    cout << "Total: " << soma << endl;
}