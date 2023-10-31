#include <iostream>
#include <string>
#include <ctime>

using namespace std;

bool ehAnoBissexto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

bool ehDataValida(int dia, int mes, int ano) {
    if (ano < 0 || mes < 1 || mes > 12 || dia < 1)
        return false;

    int diasPorMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (ehAnoBissexto(ano))
        diasPorMes[2] = 29;

    return dia <= diasPorMes[mes];
}

string nomeDoMes(int mes) {
    string nomesDosMeses[] = {"", "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    return nomesDosMeses[mes];
}

int main() {
    string data;
    cout << "Digite uma data no formato dd/mm/aaaa: ";
    cin >> data;

    int dia, mes, ano;
    if (sscanf(data.c_str(), "%d/%d/%d", &dia, &mes, &ano) == 3) {
        if (ehDataValida(dia, mes, ano)) {
            string nomeMes = nomeDoMes(mes);
            cout << dia << " de " << nomeMes << " de " << ano << endl;
        } else {
            cout << "Data inválida." << endl;
        }
    } else {
        cout << "Formato de data inválido." << endl;
    }

    return 0;
}
