#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));  // Inicialização do gerador de números aleatórios

    const int WIDTH = 640;
    const int HEIGHT = 480;
    int image[HEIGHT][WIDTH]; // Representação da imagem em tons de cinza
    int histogram[256] = {0}; // Histograma inicializado com 0 para todas as intensidades

    // a. Simulação da captura de uma imagem de 640x480 em tons de cinza
    for(int i = 0; i < HEIGHT; i++) {
        for(int j = 0; j < WIDTH; j++) {
            image[i][j] = rand() % 256; // Valor aleatório entre 0 e 255
        }
    }

    // b. Construção do histograma da imagem
    for(int i = 0; i < HEIGHT; i++) {
        for(int j = 0; j < WIDTH; j++) {
            histogram[image[i][j]]++;
        }
    }

    // Impressão do histograma
    cout << "Histograma da imagem:\n";
    for(int i = 0; i < 256; i++) {
        cout << "Intensidade " << i << ": " << histogram[i] << " pixels\n";
    }

    return 0;
}
