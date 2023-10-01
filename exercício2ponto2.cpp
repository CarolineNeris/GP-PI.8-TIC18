#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int NUM_ALUNOS = 15;

int main() {
    srand(time(nullptr));

    // Simular notas da primeira avaliação
    float notas1[NUM_ALUNOS];
    for (int i = 0; i < NUM_ALUNOS; i++) {
        notas1[i] = ((float)rand() / RAND_MAX) * 10;
    }

    // Simular notas da segunda avaliação
    float notas2[NUM_ALUNOS];
    for (int i = 0; i < NUM_ALUNOS; i++) {
        notas2[i] = ((float)rand() / RAND_MAX) * 10;
    }

    // Comparar notas e imprimir mensagens
    cout << "Comparacao das notas da segunda avaliacao em relacao a primeira:" << endl;
    for (int i = 0; i < NUM_ALUNOS; i++) {
        cout << "Aluno " << i + 1 << ": ";
        if (notas2[i] > notas1[i]) {
            cout << "Melhorou" << endl;
        } else if (notas2[i] < notas1[i]) {
            cout << "Piorou" << endl;
        } else {
            cout << "Manteve a nota" << endl;
        }
    }

    // Calcular a média das duas avaliações
    float medias[NUM_ALUNOS];
    for (int i = 0; i < NUM_ALUNOS; i++) {
        medias[i] = (notas1[i] + notas2[i]) / 2;
    }

    // Imprimir as médias
    cout << "\nMedias das duas avaliacoes:" << endl;
    for (int i = 0; i < NUM_ALUNOS; i++) {
        cout << "Aluno " << i + 1 << ": " << medias[i] << endl;
    }

    return 0;
}
