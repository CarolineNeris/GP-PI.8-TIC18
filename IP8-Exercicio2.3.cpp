#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

const int NUM_ALUNOS = 15;

int main() {
    vector<float> notasPrimeiraAvaliacao(NUM_ALUNOS);
    vector<float> notasSegundaAvaliacao(NUM_ALUNOS);
    vector<float> mediasNotas(NUM_ALUNOS);

    // Inicialize o gerador de números aleatórios com o tempo atual
    srand(static_cast<unsigned int>(time(nullptr)));

    // Preencha os vetores com notas aleatórias entre 0 e 10
    for (int i = 0; i < NUM_ALUNOS; i++) {
        notasPrimeiraAvaliacao[i] = (static_cast<float>(rand()) / RAND_MAX) * 10;
        notasSegundaAvaliacao[i] = (static_cast<float>(rand()) / RAND_MAX) * 10;
    }

    cout << "Desempenho dos alunos na segunda avaliação:" << endl;
    for (int i = 0; i < NUM_ALUNOS; i++) {
        cout << "Aluno " << i + 1 << ": ";
        if (notasSegundaAvaliacao[i] > notasPrimeiraAvaliacao[i]) {
            cout << "Melhorou" << endl;
        } else if (notasSegundaAvaliacao[i] < notasPrimeiraAvaliacao[i]) {
            cout << "Piorou" << endl;
        } else {
            cout << "Manteve a nota" << endl;
        }
    }

    for (int i = 0; i < NUM_ALUNOS; i++) {
        mediasNotas[i] = (notasPrimeiraAvaliacao[i] + notasSegundaAvaliacao[i]) / 2.0;
    }

    // Imprima as médias
    cout << "Média das notas dos alunos nas duas avaliações:" << endl;
    for (int i = 0; i < NUM_ALUNOS; i++) {
        cout << "Aluno " << i + 1 << ": " << mediasNotas[i] << endl;
    }

    return 0;
}
