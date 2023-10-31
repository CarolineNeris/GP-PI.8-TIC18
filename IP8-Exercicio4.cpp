#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int largura = 640;
const int altura = 480;
const int intensidadeMaxima = 256;

int main() {
    // Inicialize o gerador de números aleatórios com o tempo atual
    srand(static_cast<unsigned int>(time(nullptr)));

    int imagem[altura][largura];

    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            imagem[i][j] = rand() % intensidadeMaxima;
        }
    }

    int histograma[intensidadeMaxima] = {0};

    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            int intensidade = imagem[i][j];
            histograma[intensidade]++;
        }
    }

    cout << "Histograma da imagem:" << endl;
    for (int i = 0; i < intensidadeMaxima; i++) {
        cout << "Intensidade " << i << ": " << histograma[i] << " pixels" << endl;
    }

    return 0;
}
