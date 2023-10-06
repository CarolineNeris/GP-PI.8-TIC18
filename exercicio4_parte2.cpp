#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

char caractereAleatorio() {
    return 'a' + rand() % 26;
}

string stringAleatoria() {
    string resultado;
    for (int i = 0; i < 10; i++) {
        resultado += caractereAleatorio();
    }
    return resultado;
}

string primeiraMaiuscula(const string& str) {
    string resultado = str;
    if (!resultado.empty()) {
        resultado[0] = toupper(resultado[0]);
    }
    return resultado;
}

int main() {
    
    srand(time(0));

    vector<string> strings;

    // Gerar uma lista de 10 strings aleatórias
    for (int i = 0; i < 10; i++) {
        string randomString = stringAleatoria();
        strings.push_back(primeiraMaiuscula(randomString));
    }

    // Ordenar as strings em ordem alfabética
    sort(strings.begin(), strings.end());

    cout << "Strings em ordem alfabética:" << endl;
    for (const string& s : strings) {
        cout << s << endl;
    }

    return 0;
}

