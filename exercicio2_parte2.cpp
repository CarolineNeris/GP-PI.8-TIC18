#include <iostream>
#include <cstdlib> // Para a função rand
#include <ctime>   // Para a função time

using namespace std;

int main() {
    int numEstacoes = 250;
    double temperaturaMinima = 10.0;
    double temperaturaMaxima = 40.0;

    double temperaturas[numEstacoes];
    double temperaturaMax = temperaturaMinima;
    double temperaturaMin = temperaturaMaxima;
    double somaTemperaturas = 0.0;

    // Obtém o tempo atual como semente para rand
    srand(unsigned(time(0))); // Usando o tempo atual como semente

    for (int i = 0; i < numEstacoes; i++) {
        temperaturas[i] = temperaturaMinima + 30.0 * (rand() % 100) / 3000.0;
        somaTemperaturas += temperaturas[i];

        if (temperaturas[i] > temperaturaMax) {
            temperaturaMax = temperaturas[i];
        }
        if (temperaturas[i] < temperaturaMin) {
            temperaturaMin = temperaturas[i];
        }
    }

    double temperaturaMedia = somaTemperaturas / numEstacoes;

    cout << "Temperatura maxima reportada: " << temperaturaMax << endl;
    cout << "Temperatura minima reportada: " << temperaturaMin << endl;
    cout << "Temperatura media reportada: " << temperaturaMedia << endl;

    for (int i = 0; i < numEstacoes; i++) {
        if (temperaturas[i] > temperaturaMedia) {
            temperaturas[i] += 1.0;
        } else {
            temperaturas[i] -= 2.0;
        }
    }

    cout << "Temperaturas apos a previsao do modelo:" << endl;
    for (int i = 0; i < numEstacoes; i++) {
        cout << "Estacao " << (i + 1) << ": " << temperaturas[i] << endl;
    }

    return 0;
}
