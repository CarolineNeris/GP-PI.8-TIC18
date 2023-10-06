#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

bool ehBissexto(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        return true;
    } else {
        return false;
    }
}

bool dataValida(int dia, int mes, int ano) {
    if (mes < 1 || mes > 12) {
        return false;
    }
    if (dia < 1 || dia > 31) {
        return false;
    }

    if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        if (dia > 30) {
            return false;
        }
    } else if (mes == 2) {
        if ((ehBissexto(ano) && dia > 29) || (!ehBissexto(ano) && dia > 28)) {
            return false;
        }
    }

    return true;
}

int main() {
    string data;
    cout << "Digite uma data no formato dd/mm/aaaa: ";
    getline(cin, data);

    stringstream ss(data);
    int dia, mes, ano;
    char delimiter;

    ss >> dia >> delimiter >> mes >> delimiter >> ano;

    if (dataValida(dia, mes, ano)) {
        cout << "Dia: " << dia << endl;
        cout << "Mes: " << mes << endl;
        cout << "Ano: " << ano << endl;

        const char *nomesMeses[] = {
            "Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho",
            "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"
        };

        cout << "Data por extenso: " << dia << " de " << nomesMeses[mes - 1] << " de " << ano << endl;
    } else {
        cout << "Data invalida" << endl;
    }

    return 0;
}
