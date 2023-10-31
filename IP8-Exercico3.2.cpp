#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <algorithm>

using namespace std;

string gerarStringAleatoria(int tamanho) {
    string str;
    for (int i = 0; i < tamanho; i++) {
        char caractere = 'a' + rand() % ('z' - 'a' + 1);
        str += caractere;
    }
    return str;
}

int main() {
    // Inicialize o gerador de números aleatórios com o tempo atual
    srand(static_cast<unsigned int>(time(nullptr)));

    string string1 = gerarStringAleatoria(10);
    string string2 = gerarStringAleatoria(10);

    if (!string1.empty()) {
        string1[0] = toupper(string1[0]);
    }
    if (!string2.empty()) {
        string2[0] = toupper(string2[0]);
    }

    if (string1 > string2) {
        swap(string1, string2);
    }

    cout << "Strings em ordem alfabética:" << endl;
    cout << string1 << endl;
    cout << string2 << endl;

    return 0;
}
