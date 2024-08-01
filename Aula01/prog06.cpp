#include <iostream>

using namespace std;

void troca(int &v1, int &v2){
	int aux = v1;
	v1 = v2;
	v2 = aux;
}

void troca(float &v1, float &v2){
	float aux = v1;
	v1 = v2;
	v2 = aux;
}

int main()
{
	int a=10, b=5;

	troca(a, b);
	cout << a << ' ' << b << endl;

	float x=1.5, y=3.3;
	troca(x, y);
	cout << x << ' ' << y << endl;
}
