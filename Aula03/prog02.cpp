#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> vet{10, 25, 333, -8, 79};

    sort(vet.begin(), vet.end());    
    // "old school" for
    for(int i=0; i<vet.size(); i++){
        cout << vet[i] << ' ';
    }
    cout << endl;

    // range for
    for(auto n: vet){
        cout << n << ' ';
    }
    cout << endl;

    // for com iterator
    for(auto it=vet.begin(); it!=vet.end(); ++it){
        cout << *it << ' ';
    }
    cout << endl;
}
