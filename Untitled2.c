#include <iostream>
using namespace std;

int main() {
    double num1, num2, resultado;
    int opcion;

    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    cout << "Seleccione la operación:\n";
    cout << "1 - Suma\n";
    cout << "2 - Resta\n";
    cout << "3 - Multiplicación\n";
    cout << "4 - División\n";
    cout << "Opción: ";
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
                cout << "Error: División por cero no permitida." << endl;
            }
            break;
        default:
            cout << "Opción no válida." << endl;
    }

    return 0;
}
