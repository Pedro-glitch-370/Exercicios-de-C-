#include <iostream>
#include <ctime> //time()
#include <cstdlib> //srand() e rand()
using namespace std;

int main() {
    char continuar = 's';

    while (continuar == 's') {  
        bool fim = false;

        srand(time(NULL));
        int numero = (rand() % 15) + 1;

        for (int i = 1; i <= 3; i++) {
            if (fim == false) {
                int chute;
                cout << "Você tem " << 4 - i << " tentativas." << endl;
                cout << "Digite um número entre 1 e 15:" << endl;
                cin >> chute;

                while (chute > 15 || chute < 1)
                {
                    cout << "Entrada inválida. Por favor digite outro número:" << endl;
                    cin >> chute;
                }
               
                if (chute == numero) {
                    cout << "Parabéns! Você acertou!" << endl;
                    fim = true;
                } else {
                    if (chute < numero) {
                        cout << "Tente um número maior." << endl;
                    } else {
                        cout << "Tente um número menor." << endl;
                    }
                }
            }
        }

        if (fim == false) {
            cout << "Você perdeu! O número era " << numero << "." << endl;
        }

        cout << "Deseja jogar mais uma vez? (s/n)" << endl;
        cin >> continuar;

        while (continuar != 's' && continuar != 'n') {
            cout << "Entrada inválida. Por favor digite outro input:" << endl;
            cin >> continuar;
        }
    }
   return 0;
}
