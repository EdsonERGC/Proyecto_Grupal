#include <iostream>
#include <vector>

using namespace std;

vector<char> Hexadecimal(int decimal) {
    vector<char> hexadecimal;
    
    while (decimal > 0) {
        int residuo = decimal % 16;
        char digitoHexadecimal;
        if (residuo < 10) {
            digitoHexadecimal = residuo + '0';
        } else {
            digitoHexadecimal = residuo - 10 + 'A';
        }
        hexadecimal.insert(hexadecimal.begin(), digitoHexadecimal);
        decimal /= 16;
    }
    
    return hexadecimal;
}

int main() {
    int numeroDecimal;
    cout << "Ingrese un número decimal: ";
    cin >> numeroDecimal;
    
    vector<char> numeroHexadecimal = Hexadecimal(numeroDecimal);
    
    cout << "El número hexadecimal equivalente es: ";
    for (char digito : numeroHexadecimal) {
        cout << digito;
    }
    cout << endl;
    
    return 0;
}
