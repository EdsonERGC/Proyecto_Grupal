#include <bits/stdc++.h>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(0));

    int max = 100, min = 1, intentos = 0;

    int numero_secreto = rand() % (max - min + 1) + min;

    while (true) {
        int intento;

        cout << "Introduce un n�mero entre " << min << " y " << max << ":" << endl;
        cin >> intento;

        if (intento >= min && intento <= max) {
            break;
        }
        cout << "El n�mero ingresado est� fuera de los l�mites. Intenta nuevamente." << endl;

        intentos++;
    }

    cout << "N�mero encontrado en " << intentos << " intento(s)." << endl;

    return 0;
}
