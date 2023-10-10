#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(nullptr))); 

    const int ESTACOES = 250;
    double temperaturas[ESTACOES];

    // a. Armazenar em um array as temperaturas reportadas por 250 estações meteorológicas.
    for (int i = 0; i < ESTACOES; i++) {
        temperaturas[i] = 10 + 30.0 * (rand() % 100) / 3000.0;
    }

    // b. Determine a temperatura máxima e mínima reportadas.
    double tempMaxima = temperaturas[0];
    double tempMinima = temperaturas[0];

    for (int i = 1; i < ESTACOES; i++) {
        if (temperaturas[i] > tempMaxima) {
            tempMaxima = temperaturas[i];
        }
        if (temperaturas[i] < tempMinima) {
            tempMinima = temperaturas[i];
        }
    }

    cout << "Temperatura máxima reportada: " << tempMaxima << endl;
    cout << "Temperatura mínima reportada: " << tempMinima << endl;

    // c. Determine a temperatura média entre as 250 estações.
    double soma = 0;
    for (int i = 0; i < ESTACOES; i++) {
        soma += temperaturas[i];
    }
    double media = soma / ESTACOES;
    cout << "Temperatura média: " << media << endl;

    // d. Atualize o array com as temperaturas das estações, de acordo com a previsão do modelo.
    for (int i = 0; i < ESTACOES; i++) {
        if (temperaturas[i] > media) {
            temperaturas[i] += 1;
        } else if (temperaturas[i] < media) {
            temperaturas[i] -= 2;
        }
    }

    cout << "Temperaturas atualizadas de acordo com o modelo de previsão:" << endl;
    for (int i = 0; i < ESTACOES; i++) {
        cout << temperaturas[i] << " ";
    }
    cout << endl;

    return 0;
}
