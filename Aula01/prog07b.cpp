#include <iostream>

using namespace std;

void troca(auto &v1, auto &v2)
{
    auto aux = v1;
    v1 = v2;
    v2 = aux;
}

int main()
{
    int a = 10;
    float y = 1.78;

	troca(a, y); // bugado
	cout << "Depois: " << a << ' ' << y << endl;
}
