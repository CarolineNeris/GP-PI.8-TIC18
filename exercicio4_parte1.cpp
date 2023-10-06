#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int intensidadeAleatoria() {
    return rand() % 256;
}

// Função para criar uma imagem simulada e construir o histograma
void criarImagemEHistograma(vector<vector<int>>& imagem, vector<int>& histograma) {
    srand(time(0));

    // Tamanho da imagem (640x480 pixels)
    const int largura = 640;
    const int altura = 480;

    // Inicializa a imagem com valores de intensidade aleatórios
    imagem.resize(altura, vector<int>(largura));
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            imagem[i][j] = intensidadeAleatoria();
        }
    }

    // Inicializa o histograma com contagens zero para cada intensidade
    histograma.resize(256, 0);

    // Conta a frequência de cada intensidade na imagem
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            int intensidade = imagem[i][j];
            histograma[intensidade]++;
        }
    }
}

int main() {
    vector<vector<int>> imagem;
    vector<int> histograma;

    criarImagemEHistograma(imagem, histograma);

    cout << "Histograma da imagem:" << endl;
    for (int i = 0; i < 256; i++) {
        cout << "Intensidade " << i << ": " << histograma[i] << " pixels" << endl;
    }

    return 0;
}
