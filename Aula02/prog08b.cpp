// Versão com template de função
#include <iostream>

using namespace std;

template <typename T1, typename T2>
void exibe2v(T1 v1, T2 v2, bool linebreak)
{
    cout << v1 << (linebreak ? '\n' : ' ')
         << v2 << (linebreak ? '\n' : ' ');
}

template <typename T1, typename T2>
void exibe2v(T1 v1, T2 v2)
{
    exibe2v(v1, v2, true);
}

int main()
{
    exibe2v(10, 'A');
    exibe2v(1.5, 100, true);
    exibe2v("Oi", "Olá", false);
}
