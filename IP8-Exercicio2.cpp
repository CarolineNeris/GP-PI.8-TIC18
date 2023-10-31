#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    const int tamanhoArray = 100;
    const int valorMinimo = 1;
    const int valorMaximo = 20;

    srand(static_cast<unsigned int>(time(nullptr)));

    int arrayAleatorio[tamanhoArray];
    for (int i = 0; i < tamanhoArray; i++) {
        arrayAleatorio[i] = valorMinimo + rand() % (valorMaximo - valorMinimo + 1);
    }

    int contagemValores[valorMaximo] = {0};

    for (int i = 0; i < tamanhoArray; i++) {
        int valor = arrayAleatorio[i];
        contagemValores[valor - 1]++;
    }

    int maxContagem = 0;
    for (int i = 0; i < valorMaximo; i++) {
        if (contagemValores[i] > maxContagem) {
            maxContagem = contagemValores[i];
        }
    }

    cout << "Valores mais comuns: ";
    for (int i = 0; i < valorMaximo; i++) {
        if (contagemValores[i] == maxContagem) {
            cout << i + 1 << " ";
        }
    }
    cout << " (aparecem " << maxContagem << " vezes)" << endl;

    return 0;
}
