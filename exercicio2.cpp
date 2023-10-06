#include <iostream>
#include <cstdlib> // Para a função rand

using namespace std;

int main() {
    const int tamanhoArray = 100;
    const int valorMinimo = 1;
    const int valorMaximo = 20;

    int array[tamanhoArray];
    int contagem[valorMaximo] = {0}; // Inicializa o array de contagem com zeros

    // Preenche o array com valores aleatórios entre 1 e 20 e imprime os valores
    cout << "Valores gerados aleatoriamente: ";
    for (int i = 0; i < tamanhoArray; i++) {
        array[i] = valorMinimo + rand() % (valorMaximo - valorMinimo + 1);
        cout << array[i] << " ";
    }
    cout << endl;

    // Conta quantas vezes cada valor aparece no array
    for (int i = 0; i < tamanhoArray; i++) {
        int valor = array[i];
        contagem[valor - valorMinimo]++;
    }

    // Encontra o valor (ou valores) que mais vezes aparece no array
    int maxContagem = 0;
    for (int i = 0; i < valorMaximo; i++) {
        if (contagem[i] > maxContagem) {
            maxContagem = contagem[i];
        }
    }

    // Imprime os valores que mais vezes aparecem
    cout << "Valores que mais vezes aparecem: ";
    for (int i = 0; i < valorMaximo; i++) {
        if (contagem[i] == maxContagem) {
            cout << (i + valorMinimo) << " ";
        }
    }
    cout << "aparecem " << maxContagem << " vezes." << endl;

    return 0;
}
