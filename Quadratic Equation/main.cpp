#include <iostream>
#include <cmath>
#include <cstdio>
#include <fstream> //para ler os arquivos de texto pedidos pela questão
using namespace std;

bool quadEquation(double a, double b, double c, double *sol1, double *sol2);

int main() {
   ifstream inputFile("input.txt"); //"importa" o arquivo para input
   ofstream outputFile("output.txt"); //"importa" o arquivo para output

   outputFile.precision(1); //para deixar com uma casa decimal
   outputFile << fixed; //fixed é para especificar o arredondamento

   int qtd;
   inputFile >> qtd; //lê o número de equações que tem no arquivo

   for (int i = 1; i <= qtd; i++) {
       double a, b, c;
       double solucao1, solucao2;
       inputFile >> a >> b >> c; //pega os três coeficientes

       if (quadEquation(a, b, c, &solucao1, &solucao2)) {
           outputFile << solucao1 << " " << solucao2 << endl; //imprime que nem no cout as soluções
       } else {
           outputFile << "none" << endl;
       }
   }

   inputFile.close(); //fechar o arquivo de input
   outputFile.close(); //fechar o arquivo de output
   return 0;
}

bool quadEquation(double a, double b, double c, double *sol1, double *sol2) {
   const double delta = b * b - 4 * a * c;

   if (delta < 0) {
       return false;
   }

   *sol1 = (-b + sqrt(delta)) / (2 * a);
   *sol2 = (-b - sqrt(delta)) / (2 * a);
   return true;
}
