#include <iostream>

using namespace std;

int main() {
    float km, millas, metros, pulgadas, libras, kilos;

    cout << "Ingrese la distancia en kilómetros: ";
    cin >> km;
    millas = km * 0.621371;
    cout << km << " kilómetros equivalen a " << millas << " millas." << endl;

    cout << "Ingrese la longitud en metros: ";
    cin >> metros;
    pulgadas = metros * 39.3701;
    cout << metros << " metros equivalen a " << pulgadas << " pulgadas." << endl;

    cout << "Ingrese el peso en libras: ";
    cin >> libras;
    kilos = libras * 0.453592;
    cout << libras << " libras equivalen a " << kilos << " kilogramos." << endl;

    
    cout << "Ingrese el peso en kilogramos: ";
    cin >> kilos;
    libras = kilos * 2.20462;
    cout << kilos << " kilogramos equivalen a " << libras << " libras." << endl;

    return 0;
}
