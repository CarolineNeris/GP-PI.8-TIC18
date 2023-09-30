#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(nullptr));
    int geradornumero[100];
    int contagem[20]; 

    // Preenche o array geradornumero com números aleatórios de 0 a 19
    for (int i = 0; i < 100; i++) {
        geradornumero[i] = rand() % 20;
        cout << geradornumero[i] << endl;
    }

    cout << "fim" << endl;

    // Contagem de cada número
    for (int i = 0; i < 100; i++) {
        contagem[geradornumero[i]]++;
    }

    // Imprime a contagem de cada número
    cout << "Contagem de cada número:" << endl;
    for (int i = 0; i < 20; i++) {
        cout << "Número " << i << ": " << contagem[i] << " vezes" << endl;
    }
    // Encontrar a contagem máxima
    int contagemMaxima = 0;
    for (int i = 0; i < 20; i++) {
        if (contagem[i] > contagemMaxima) {
            contagemMaxima = contagem[i];
        }
    }

    // Imprimir os números que mais vezes aparecem
    cout << "Número(s) que mais vezes aparecem: ";
    for (int i = 0; i < 20; i++) {
        if (contagem[i] == contagemMaxima) {
            cout << i << " ";
        }
    }

    cout << "aparecem " << contagemMaxima << " vezes." << endl;

    return 0;
}
