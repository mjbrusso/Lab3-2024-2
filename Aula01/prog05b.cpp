#include <iostream>

using namespace std;

int main() {
    int vet[]{10, 5, 20, 33};

    for (auto &n : vet) {
        n *= 2;
        cout << n << endl;
    }
    cout << "Primeiro: " << vet[0] << endl;
}