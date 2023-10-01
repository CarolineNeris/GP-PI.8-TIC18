#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm> // Para usar a função transform
using namespace std;

int main() {
    // Inicializa o gerador de números aleatórios com o tempo atual
    srand(time(nullptr));

    // Gera duas strings aleatórias
    string geradorCaractere[10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            geradorCaractere[i] += ('a' + rand() % ('z' - 'a' + 1));
        }
    }

    // Transforma o primeiro caractere de cada string em maiúscula
    for (int i = 0; i < 10; i++) {
        geradorCaractere[i][0] = tolower(geradorCaractere[i][0]); //substitui toupper por tolower
    }

    // Imprime as strings em ordem alfabética
    sort(begin(geradorCaractere), end(geradorCaractere));

    // Imprime as strings
    for (int i = 0; i < 10; i++) {
        cout << geradorCaractere[i] << endl;
    }

    return 0;
}
