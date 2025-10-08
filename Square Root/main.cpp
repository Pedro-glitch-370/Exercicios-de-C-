#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "A raiz quadrada de um número é um valor que, quando multiplicado por ele mesmo, resulta no número original." << endl;
    const double ex1 = 4, ex2 = 12.25, ex3 = 0.0121;
    cout << "Exemplos:" << endl;
    cout << "Raiz de " << ex1 << " é " << sqrt(ex1) << endl;
    cout << "Raiz de " << ex2 << " é " << sqrt(ex2) << endl;
    cout << "Raiz de " << ex3 << " é " << sqrt(ex3) << endl;

    double numero;
    cout << "Agora digite um número:" << endl;
    cin >> numero;

    while (numero < 0) {
        cout << numero << " não é válido. Digite outro." << endl;
        cin >> numero;
    }

    const double raiz = sqrt(numero);
    cout << "A raiz de " << numero << " é " << raiz << "." << endl;

    return 0;
}
