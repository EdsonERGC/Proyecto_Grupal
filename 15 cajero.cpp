#include <iostream>
#include <string>

using namespace std;

int main() {
    double saldo = 0.0;
    string usuario = "admin";
    string contrasena = "1234";

    cout << "Bienvenido al cajero automático                      (usuario admin  Contraseña 1234)" << endl;
    cout << "Usuario: ";
    string input_usuario;
    cin >> input_usuario;

    cout << "Contraseña: ";
    string input_contrasena;
    cin >> input_contrasena;

    if (input_usuario == usuario && input_contrasena == contrasena) {
        cout << "Inicio de sesión exitoso" << endl;

        int opcion;
        do {
            cout << "\nMenú:" << endl;
            cout << "1. Consultar saldo" << endl;
            cout << "2. Ingresar dinero" << endl;
            cout << "3. Sacar dinero" << endl;
            cout << "4. Salir" << endl;
            cout << "Selecciona una opción: ";
            cin >> opcion;

            switch (opcion) {
                case 1:
                    cout << "Saldo actual: $" << saldo << endl;
                    break;
                case 2:
                    double deposito;
                    cout << "Ingrese la cantidad a depositar: $";
                    cin >> deposito;
                    saldo += deposito;
                    cout << "Depósito exitoso. Saldo actual: $" << saldo << endl;
                    break;
                case 3:
                    double retiro;
                    cout << "Ingrese la cantidad a retirar: $";
                    cin >> retiro;
                    if (retiro <= saldo) {
                        saldo -= retiro;
                        cout << "Retiro exitoso. Saldo actual: $" << saldo << endl;
                    } else {
                        cout << "Saldo insuficiente." << endl;
                    }
                    break;
                case 4:
                    cout << "Gracias por usar el cajero automático. ¡Hasta luego!" << endl;
                    break;
                default:
                    cout << "Opción inválida. Intente nuevamente." << endl;
            }
        } while (opcion != 4);
    } else {
        cout << "Credenciales incorrectas. Acceso denegado." << endl;
    }

    return 0;
}
