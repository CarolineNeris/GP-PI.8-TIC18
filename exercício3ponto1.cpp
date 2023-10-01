#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm> // Para usar a função transform
using namespace std;

int main() {
    // Inicializa o gerador de números aleatórios com o tempo atual
    srand(time(nullptr));

    // Gera duas strings aleatórias
    string geradorCaractere[2];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 10; j++) {
            geradorCaractere[i] += ('a' + rand() % ('z' - 'a' + 1));
        }
    }

    // Transforma o primeiro caractere de cada string em maiúscula
    for (int i = 0; i < 2; i++) {
        geradorCaractere[i][0] = toupper(geradorCaractere[i][0]);
    }

    // Imprime as strings em ordem alfabética
    sort(begin(geradorCaractere), end(geradorCaractere));

    // Imprime as strings
    for (int i = 0; i < 2; i++) {
        cout << geradorCaractere[i] << endl;
    }

    return 0;
}
