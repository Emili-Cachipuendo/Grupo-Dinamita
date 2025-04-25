#include <iostream>
using namespace std;

int main() {
    double num1, num2, resultado;
    int opcion;

    cout << "Ingrese el primer n�mero: ";
    cin >> num1;

    cout << "Ingrese el segundo n�mero: ";
    cin >> num2;

    cout << "Seleccione la operaci�n:\n";
    cout << "1 - Suma\n";
    cout << "2 - Resta\n";
    cout << "3 - Multiplicaci�n\n";
    cout << "4 - Divisi�n\n";
    cout << "Opci�n: ";
    cin >> opcion;

    switch(opcion) {
        case 1:
            resultado = num1 + num2;
            cout << "Resultado: " << resultado << endl;
            break;
        case 2:
            resultado = num1 - num2;
            cout << "Resultado: " << resultado << endl;
            break;
        case 3:
            resultado = num1 * num2;
            cout << "Resultado: " << resultado << endl;
            break;
        case 4:
            if(num2 != 0) {
                resultado = num1 / num2;
                cout << "Resultado: " << resultado << endl;
            } else {
                cout << "Error: Divisi�n por cero no permitida." << endl;
            }
            break;
        default:
            cout << "Opci�n no v�lida." << endl;
    }

    return 0;
}
