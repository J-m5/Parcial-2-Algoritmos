#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Introduce un número del 1 al 4: ";
    cin >> numero;

    switch(numero) {
        case 1:
            cout << "Primavera" << endl;
            break;
        case 2:
            cout << "Verano" << endl;
            break;
        case 3:
            cout << "Otoño" << endl;
            break;
        case 4:
            cout << "Invierno" << endl;
            break;
        default:
            cout << "Número no válido. Por favor, introduce un número entre 1 y 4." << endl;
    }

    return 0;
}








