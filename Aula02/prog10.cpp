#include <iostream>

using namespace std;

template<typename T>
T acumula(T v[], int n){
	T acum{}; // Inicializa com valor default para o tipo
	for(int i=0; i<n; i++){
		acum += v[i];
	}
	return acum;
}

int main()
{
	int vet[4]{10, 22, 45, 9};
	double vd[3]{1.55, 4.02, 9.1};
	string vs[]{"abc", "def"};

	cout << "Total: " << acumula(vet, 4) << endl;
	cout << "Total: " << acumula(vd, 3) << endl;
	cout << "Total: " << acumula(vs, 2) << endl;
}
