/*Muito difícil
na proxima encaranação eu faço
ou no meio da magrugada depois de sonhar com a solução.*/

#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

// Função para gerar uma imagem simulada
void gerarImagemSimulada(vector<vector<int>>& imagem) {
    for (int i = 0; i < imagem.size(); ++i) {
        for (int j = 0; j < imagem[i].size(); ++j) {
            imagem[i][j] = rand() % 256;
        }
    }
}

int main (){
    
    return 0;
}