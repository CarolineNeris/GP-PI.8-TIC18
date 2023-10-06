#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <algorithm>
#include<vector>

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

    string string1 = stringAleatoria();
    string string2 = stringAleatoria();

    string1 = primeiraMaiuscula(string1);
    string2 = primeiraMaiuscula(string2);

    vector<string> strings;
    strings.push_back(string1);
    strings.push_back(string2);

    sort(strings.begin(), strings.end());

    cout << "Strings em ordem alfabetica:" << endl;
    for (const string& s : strings) {
        cout << s << endl;
    }

    return 0;
}
