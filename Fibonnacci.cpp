#include <iostream>

int main() {
    using namespace std;

    int numeros_terminos;

    cout << "Introduce el número de términos en la secuencia de Fibonacci: ";
    cin >> numeros_terminos;

    if (numeros_terminos <= 0) {
        cout << "La cantidad de términos debe ser mayor a 0." << endl;
    } else {
        int termino1 = 0;
        int termino2 = 1;

        cout << "Secuencia de Fibonacci:" << endl;

        for (int i = 0; i < numeros_terminos; ++i) {
            cout << termino1 << " ";
            int siguiente_termino = termino1 + termino2;
            termino1 = termino2;
            termino2 = siguiente_termino;
        }

        cout << endl;
    }

    return 0;
}
