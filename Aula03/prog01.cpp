#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> vet; // Cria um vector de int inicialmente vazio

    // vet.reserve(1000);
    cout << "Size: " << vet.size() << endl;
    cout << "Capacity: " << vet.capacity() << endl;
    vet.push_back(100);
    vet.push_back(25);
    vet.push_back(333);
    cout << "Size: " << vet.size() << endl;
    cout << "Capacity: " << vet.capacity() << endl;
    cout << vet[1] << endl;
    vet.pop_back();
    cout << "Size: " << vet.size() << endl;
    cout << "Capacity: " << vet.capacity() << endl;
    cout << "Último: " << vet[vet.size() - 1] << endl;
}
