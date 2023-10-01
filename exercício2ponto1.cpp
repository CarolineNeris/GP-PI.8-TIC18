#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

int main() {
    srand(time(nullptr));

    vector<float> temperaturas(250);

    for (int i = 0; i < 250; i++) {
        temperaturas[i] = 10 + 30.0 * (rand() % 100) / 3000.0;
    }

    // Imprimir as temperaturas reportadas
    cout << "Temperaturas reportadas por 250 estacoes meteorologicas:" << endl;
    for (int i = 0; i < 250; i++) {
        cout << "Estacao " << i + 1 << ": " << temperaturas[i] << "°C" << endl;
    }

    // Encontrar a temperatura máxima e mínima
    float temperaturaMaxima = temperaturas[0];
    float temperaturaMinima = temperaturas[0];

    for (int i = 1; i < 250; i++) {
        if (temperaturas[i] > temperaturaMaxima) {
            temperaturaMaxima = temperaturas[i];
        }
        if (temperaturas[i] < temperaturaMinima) {
            temperaturaMinima = temperaturas[i];
        }
    }

    // Imprimir a temperatura máxima e mínima
    cout << "Temperatura Maxima Reportada: " << temperaturaMaxima << "°C" << endl;
    cout << "Temperatura Minima Reportada: " << temperaturaMinima << "°C" << endl;

    // Calcular a temperatura média
    float somaTemperaturas = 0.0;
    for (int i = 0; i < 250; i++) {
        somaTemperaturas += temperaturas[i];
    }
    float temperaturaMedia = somaTemperaturas / 250;

    // Imprimir a temperatura média
    cout << "Temperatura Media Reportada: " << temperaturaMedia << "°C" << endl;

    // Atualizar o array com base na previsão do modelo
    for (int i = 0; i < 250; i++) {
        if (temperaturas[i] > temperaturaMedia) {
            // Estações acima da média ficam 1 grau mais quentes
            temperaturas[i] += 1.0;
        } else {
            // Estações abaixo da média ficam 2 graus mais frias
            temperaturas[i] -= 2.0;
        }
    }

    // Imprimir as temperaturas atualizadas
    cout << "Temperaturas Atualizadas:" << endl;
    for (int i = 0; i < 250; i++) {
        cout << "Estacao " << i + 1 << ": " << temperaturas[i] << "°C" << endl;
    }

    return 0;
}
