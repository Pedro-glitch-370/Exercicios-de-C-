#include "fraction.h"
#include <iostream>
using namespace std;

int main() {
    Fraction fr1(1, 2);
    Fraction fr2(3, 5);
    Fraction fr3(11, 10);
    Fraction fr4(16);

    cout << "A primeira fracao: " << fr1 << endl;
    cout << "A segunda fracao: " << fr2 << endl;

    cout << "Soma: " << fr1 + fr2 << endl;
    cout << "Subtracao: " << fr1 - fr2 << endl;
    cout << "Multiplicacao: " << fr1 * fr2 << endl;
    cout << "Divisao: " << fr1 / fr2 << endl;

    cout << "A terceira fracao: " << fr3 << endl;
    cout << "Exemplo de soma pelo denominador: " << ++fr3 << endl;
    --fr3; //pra reverter a soma
    cout << "Exemplo de subtracao pelo denominador: " << --fr3 << endl;

    fr2 += Fraction(1, 4);
    cout << "Soma de 1/2 por 1/4 (nao declarado antes): " << fr2 << endl;
    fr3 -= Fraction(1, 2);
    cout << "Subtracao de 11/10 por 1/2 (nao declarado antes): " << fr3 << endl;

    cout << "Fracao inteira (sem definicao de denominador): " << fr4 << endl;

    cout << "Agora sua fracao!" << endl;
    cin >> fr1;
    cout << "Sua fracao: " << fr1 << endl;
    return 0;

}