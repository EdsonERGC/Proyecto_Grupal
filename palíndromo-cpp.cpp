#include <iostream>
#include <string>
#include <algorithm>

// Función para verificar si una cadena es un palíndromo
bool esPalindromo(const std::string& palabra) {
    std::string palabraInvertida = palabra;
    std::reverse(palabraInvertida.begin(), palabraInvertida.end());
    return palabra == palabraInvertida;
}


bool esPalindromo(int numero) {
    int original = numero;
    int invertido = 0;
    
    while (numero > 0) {
        invertido = invertido * 10 + numero % 10;
        numero /= 10;
    }
    
    return original == invertido;
}

int main() {
    
    std::string palabra;
    std::cout << "Ingrese una palabra: ";
    std::cin >> palabra;
    if (esPalindromo(palabra)) {
        std::cout << palabra << " es un palindromo." << std::endl;
    } else {
        std::cout << palabra << " no es un palindromo." << std::endl;
    }

    int numero;
    std::cout << "Ingrese un numero: ";
    std::cin >> numero;
    if (esPalindromo(numero)) {
        std::cout << numero << " es un palindromo." << std::endl;
    } else {
        std::cout << numero << " no es un palindromo." << std::endl;
    }

    return 0;
}
