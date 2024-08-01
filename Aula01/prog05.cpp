#include <iostream>

using namespace std;

void foo(int &n)
{
    n++;
    cout << "N: " << n << endl;
}

int main()
{
	int a=10;

    foo(a);
    foo(a);
    foo(a);
}