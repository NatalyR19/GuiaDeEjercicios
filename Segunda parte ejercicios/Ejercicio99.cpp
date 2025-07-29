#include <iostream>
using namespace std;
bool esBisiesto(int anio) {
    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
        return true;
    }
    return false;
}
bool validarFecha(int dia, int mes, int anio) {
    if (anio < 1) {
        return false;
    }
    if (mes < 1 || mes > 12) {
        return false;
    }
    int diasMes;
    switch (mes) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            diasMes = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            diasMes = 30;
            break;
        case 2:
            if (esBisiesto(anio)) {
                diasMes = 29;
            } else {
                diasMes = 28;
            }
            break;
        default:
            diasMes = 0;
            break;
    }
    if (dia < 1 || dia > diasMes) {
        return false;
    }
    return true;
}
int main() {
    int dia, mes, anio;
    cout << "Ingrese el dia: ";
    cin >> dia;
    cout << "Ingrese el mes: ";
    cin >> mes;
    cout << "Ingrese el anio: ";
    cin >> anio;
    if (validarFecha(dia, mes, anio)) {
        cout << "La fecha ingresada es valida." << endl;
    } else {
        cout << "La fecha ingresada NO es valida." << endl;
    }
    return 0;
}
