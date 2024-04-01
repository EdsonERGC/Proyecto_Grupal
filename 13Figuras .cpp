#include <iostream>
using namespace std;

void dibujarCuadrado(int lado) {
    for (int i = 0; i < lado; ++i) {
        for (int j = 0; j < lado; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
}

void dibujarTriangulo(int altura) {
    for (int i = 1; i <= altura; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
}

void dibujarCirculo(int radio) {
    for (int i = -radio; i <= radio; ++i) {
        for (int j = -radio; j <= radio; ++j) {
            if (i * i + j * j <= radio * radio) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main() {
    int opcion;
    cout << "Selecciona una figura:" << endl;
    cout << "1. Cuadrado" << endl;
    cout << "2. Triángulo" << endl;
    cout << "3. Círculo" << endl;
    cin >> opcion;

    switch (opcion) {
        case 1:
            dibujarCuadrado(5);  
            break;
        case 2:
            dibujarTriangulo(5);  
            break;
        case 3:
            dibujarCirculo(5); 
            break;
        default:
            cout << "Opción inválida." << endl;
    }

    return 0;
}
