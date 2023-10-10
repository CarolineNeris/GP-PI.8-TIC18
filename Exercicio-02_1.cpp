#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(nullptr))); 

    const int TAM = 100;
    int arr[TAM];
    int freq[20] = {0}; 

    // a. Preencha um array com 100 elementos com valores aleatórios entre 1 e 20
    for (int i = 0; i < TAM; i++) {
        arr[i] = 1 + rand() % 20;
    }

    // b. Utilize um array de 20 posições para determinar quantas vezes se repete cada um dos possíveis valores
    for (int i = 0; i < TAM; i++) {
        freq[arr[i] - 1]++;  
    }

    // c. Determine qual ou quais os números que mais vezes aparecem no array
    int maxFreq = 0;
    for (int i = 0; i < 20; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
        }
    }

    cout << "Números que mais aparecem no array (aparecem " << maxFreq << " vezes): ";
    for (int i = 0; i < 20; i++) {
        if (freq[i] == maxFreq) {
            cout << i + 1 << " ";
        }
    }
    cout << endl;

    return 0;
}
