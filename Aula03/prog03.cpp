#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> vet{10, 25, 333, -8, 79};
    // vector<int>::iterator it = vet.begin();
    auto it = vet.begin();
    cout << *it << endl;
    it++;
    cout << *it << endl;
}
