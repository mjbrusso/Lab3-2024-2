// Meu primeiro programa C++
#include <iostream> // biblioteca de I/O
#include <iomanip>  // formatação de I/O
#include <string>   // string
#include <cmath>

using namespace std;

int main() {
    cout << "Hello, world\n";
    int x = 5;

    cout << "O valor de x é " << x << endl;

    float a, b, c;
	cout << "Informe dois números: ";
    cin >> a >> b;
    c = a / b;

    cout << fixed << setprecision(2) 
         << "A: " << a 
         << " B: " << b 
         << " C: " << c
         << endl;

    bool teste = false;

    string cidade = "Passo Fundo";
    cout << cidade << endl;
    cout << "Qual cidade? ";
    // cin >> cidade; // Só lê até o espaço

    cin.ignore();         // Descarta o ENTER do buffer
    getline(cin, cidade); // Lê toda a linha, incluindo espaços

    cout << cidade << endl;
    if (cidade == "Casca")
        cout << "População de " << cidade << ": mais de 8 mil!!!\n";
    else
        cout << "Não é Casca\n";

    return 0;
}
