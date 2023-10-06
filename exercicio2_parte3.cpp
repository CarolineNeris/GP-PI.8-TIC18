#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int numAlunos = 15;
    float notasAvaliacao1[numAlunos];
    float notasAvaliacao2[numAlunos];
    float medias[numAlunos];

    srand(time(nullptr));

    for (int i = 0; i < numAlunos; i++) {
        notasAvaliacao1[i] = ((float)rand() / RAND_MAX) * 10;
        notasAvaliacao2[i] = ((float)rand() / RAND_MAX) * 10;
    }

    for (int i = 0; i < numAlunos; i++) {
        medias[i] = (notasAvaliacao1[i] + notasAvaliacao2[i]) / 2;

        cout << "Aluno " << i + 1 << ":" << endl;
        cout << "Nota na Avaliacao 1: " << notasAvaliacao1[i] << endl;
        cout << "Nota na Avaliacao 2: " << notasAvaliacao2[i] << endl;

        if (notasAvaliacao2[i] > notasAvaliacao1[i]) {
            cout << "Desempenho: Melhorou" << endl;
        } else if (notasAvaliacao2[i] < notasAvaliacao1[i]) {
            cout << "Desempenho: Piorou" << endl;
        } else {
            cout << "Desempenho: Manteve a nota" << endl;
        }

        cout << "Media das Avaliacoes: " << medias[i] << endl;
        cout << endl;
    }

    return 0;
}
