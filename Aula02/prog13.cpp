#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(const int &a, const int &b){
    return a>b;
}

int main(){
    int vet[]{10, 5, -1, 28, 730, 99};
    cout << "Original\n";
    for(auto n : vet)
        cout << n << endl;

    sort(begin(vet), end(vet), cmp); 

    cout << "Ordenado\n";
    for(auto n : vet)
        cout << n << endl;

}