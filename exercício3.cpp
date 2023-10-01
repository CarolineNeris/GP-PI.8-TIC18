#include <iostream>
#include <vector>
using namespace std;
namespace std {

    bool ehAnoBissexto(int ano) {
        return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
    }

    bool ehDataValida(int dia, int mes, int ano) {
        if (mes < 1 || mes > 12 || dia < 1) {
            return false;
        }

        vector<int> diasNoMes = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        if (mes == 2 && ehAnoBissexto(ano)) {
            diasNoMes[2] = 29;
        }

        return (dia <= diasNoMes[mes]);
    }

    string obterNomeMes(int mes) {
        const vector<string> nomesMeses = {"", "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
        
        return nomesMeses[mes];
    }

    void imprimirDataPorExtenso(int dia, int mes, int ano) {
        cout << dia << " de " << obterNomeMes(mes) << " de " << ano << endl;
    }

}

int main() {
    int dia, mes, ano;

    // Leitura da data do teclado
    cout << "Digite a data no formato dd/mm/aaaa: ";
    cin >> dia >> mes >> ano;

    // Verificar se a data é válida
    if (ehDataValida(dia, mes, ano)) {
        cout << "Data válida!" << endl;

        // Imprimir dia, mês e ano separadamente
        cout << "Dia: " << dia << endl;
        cout << "Mês: " << mes << endl;
        cout << "Ano: " << ano << endl;

        // Imprimir a data por extenso
        imprimirDataPorExtenso(dia, mes, ano);
    } else {
        cout << "Data inválida!" << endl;
    }

    return 0;
}
