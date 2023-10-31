#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int numEstacoes = 250;
    const double temperaturaMinima = 10.0;
    const double temperaturaMaxima = 40.0;

    double temperaturas[numEstacoes];

    // Inicialize o gerador de números aleatórios com o tempo atual
    srand(static_cast<unsigned int>(time(nullptr)));

    // Preencha o array com temperaturas aleatórias entre 10 e 40
    for (int i = 0; i < numEstacoes; i++) {
        temperaturas[i] = temperaturaMinima + (temperaturaMaxima - temperaturaMinima) * (rand() % 100) / 100.0;
    }

    // Encontre a temperatura máxima e mínima
    double temperaturaMax = temperaturas[0];
    double temperaturaMin = temperaturas[0];
    double somaTemperaturas = 0.0;

    for (int i = 0; i < numEstacoes; i++) {
        if (temperaturas[i] > temperaturaMax) {
            temperaturaMax = temperaturas[i];
        }
        if (temperaturas[i] < temperaturaMin) {
            temperaturaMin = temperaturas[i];
        }
        somaTemperaturas += temperaturas[i];
    }

    double temperaturaMedia = somaTemperaturas / numEstacoes;

    cout << "Temperatura máxima: " << temperaturaMax << "°C" << endl;
    cout << "Temperatura mínima: " << temperaturaMin << "°C" << endl;
    cout << "Temperatura média: " << temperaturaMedia << "°C" << endl;

    // Atualize as temperaturas com base no modelo de predição
    for (int i = 0; i < numEstacoes; i++) {
        if (temperaturas[i] > temperaturaMedia) {
            temperaturas[i] += 1.0;
        } else {
            temperaturas[i] -= 2.0;
        }
    }

    // Imprima as temperaturas atualizadas
    cout << "Temperaturas após a atualização:" << endl;
    for (int i = 0; i < numEstacoes; i++) {
        cout << "Estação " << i + 1 << ": " << temperaturas[i] << "°C" << endl;
    }

    return 0;
}
