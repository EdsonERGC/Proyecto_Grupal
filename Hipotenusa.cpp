#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice;
    double side1, side2;
    while (true) {
        cout << "\n1. Calcular la Hipotenusa\n2. Exit\n";
        cout << "Escoja una opcion: ";
        cin >> choice;
        if (choice == 1) {
            cout << "Ingrese la longitud del primer lado: ";
            cin >> side1;
            cout << "Ingrese la longitud del seguno lado: ";
            cin >> side2;
            if (side1 <= 0 || side2 <= 0) {
                cout << "Ingreso invaldo. Por favor ingresa unicamente valores positivos \n";
            } else {
                double hypotenuse = sqrt(pow(side1, 2) + pow(side2, 2));
                cout << "La longitud de la Hipotenusa es: " << hypotenuse << "\n";
            }
        } else if (choice == 2) {
            break;
        } else {
            cout << "Invalid choice. Please enter 1 or 2 only.\n";
        }
    }
    return 0;
}
