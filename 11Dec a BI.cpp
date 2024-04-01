#include <iostream>
#include <vector>

using namespace std;

vector<int> decimalABinario(int decimal) {
    vector<int> binario;
    
    while (decimal > 0) {
        int residuo = decimal % 2;
        binario.insert(binario.begin(), residuo); 
        decimal /= 2;
    }
    
    return binario;
}

int main() {
    int numeroDecimal;
    
    cout << "Ingrese un número decimal: ";
    cin >> numeroDecimal;
    
    vector<int> numeroBinario = decimalABinario(numeroDecimal);
    
    cout << "El número binario equivalente es: ";
    for (int digito : numeroBinario) {
        cout << digito;
    }
    cout << endl;
    
    return 0;
}
