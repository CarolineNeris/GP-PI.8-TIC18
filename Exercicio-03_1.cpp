#include <iostream>
using namespace std;

int main() {
    int day, month, year;

    cout << "Digite a data no formato dd/mm/aaaa ou uma variação: ";
    cin >> day;
    cin.ignore(1, '/'); 
    cin >> month;
    cin.ignore(1, '/');
    cin >> year;

    cout << "Dia: " << day << endl;
    cout << "Mês: " << month << endl;
    cout << "Ano: " << year << endl;

    bool leapYear = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;

    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month < 1 || month > 12) {
        cout << "Data inválida!" << endl;
        return 1;
    }
    if (leapYear && month == 2) {
        if (day < 1 || day > 29) {
            cout << "Data inválida!" << endl;
            return 1;
        }
    } else {
        if (day < 1 || day > daysInMonth[month]) {
            cout << "Data inválida!" << endl;
            return 1;
        }
    }

    string months[] = {
        "", "janeiro", "fevereiro", "março", "abril", "maio", "junho",
        "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"
    };
    cout << day << " de " << months[month] << " de " << year << endl;

    return 0;
}
