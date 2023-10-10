#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); 

    const int ALUNOS = 15;
    float notas1[ALUNOS], notas2[ALUNOS], medias[ALUNOS];

    // a. Simula as notas de uma turma de 15 alunos em uma avaliação
    for (int i = 0; i < ALUNOS; i++) {
        notas1[i] = ((float)rand() / RAND_MAX) * 10;
    }

    // b. Simula as notas da mesma turma numa segunda avaliação
    for (int i = 0; i < ALUNOS; i++) {
        notas2[i] = ((float)rand() / RAND_MAX) * 10;
    }

    // c. Compara as notas e imprima a mensagem correspondente
    for (int i = 0; i < ALUNOS; i++) {
        if (notas2[i] > notas1[i]) {
            printf("Aluno %d: Melhorou\n", i + 1);
        } else if (notas2[i] < notas1[i]) {
            printf("Aluno %d: Piorou\n", i + 1);
        } else {
            printf("Aluno %d: Manteve a nota\n", i + 1);
        }
    }

    // d. Preenche um terceiro array com a média de cada aluno
    for (int i = 0; i < ALUNOS; i++) {
        medias[i] = (notas1[i] + notas2[i]) / 2;
        printf("Média do aluno %d: %.2f\n", i + 1, medias[i]);
    }

    return 0;
}
