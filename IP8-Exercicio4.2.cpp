#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
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

    srand(static_cast<unsigned int>(time(nullptr)));

    vector<string> listaDeStrings;

    for (int i = 0; i < 10; i++) {
        string str = gerarStringAleatoria(10);

        if (!str.empty()) {
            str[0] = toupper(str[0]);
        }

        listaDeStrings.push_back(str);
    }

    sort(listaDeStrings.begin(), listaDeStrings.end());

    cout << "Strings em ordem alfabética:" << endl;
    for (const string &str : listaDeStrings) {
        cout << str << endl;
    }

    return 0;
}
