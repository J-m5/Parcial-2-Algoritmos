#include <iostream>
using namespace std;

int calcularPotencia(int base, int exponente) {
    int resultado = 1;
    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }
    return resultado;
}

int main() {
    int base, exponente;
    cout << "Introduce la base (número entero): ";
    cin >> base;

    cout << "Introduce el exponente (número entero): ";
    cin >> exponente;

    int potencia = calcularPotencia(base, exponente);
    cout << base << " elevado a la " << exponente << " es igual a " << potencia << endl;

    return 0;
}