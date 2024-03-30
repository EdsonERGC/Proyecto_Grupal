#include <iostream>
using namespace std;

int main() {
    int elecion;

    do {
        cout << "Menú:" << endl;
        cout << "1. Opción 1" << endl;
        cout << "2. Opción 2" << endl;
        cout << "3. Opción 3" << endl;
        cout << "4. Opción 4" << endl;
        cout << "5. Opción 5" << endl;
        cout << "6. Opción 6" << endl;
        cout << "7. Opción 7" << endl;
        cout << "8. Opción 8" << endl;
        cout << "9. Opción 9" << endl;
        cout << "10. Opción 10" << endl;
        cout << "11. Opción 11" << endl;
        cout << "12. Opción 12" << endl;
        cout << "13. Opción 13" << endl;
        cout << "14. Opción 14" << endl;
        cout << "15. Opción 15" << endl;
        cout << "16. Opción 16" << endl;
        cout << "17. Opción 17" << endl;
        cout << "18. Opción 18" << endl;
        cout << "19. Opción 19" << endl;
        cout << "20. Opción 20" << endl;
        cout << "21. Salir" << endl;
        cout << "Ingresa tu elección (1-21): ";
        cin >> elecion;

        switch (elecion) {
            case 1:
                cout << "Seleccionaste la Opción 1" << endl;
                break;
            case 2:
                cout << "Seleccionaste la Opción 2" << endl;
                break;
            case 3:
                cout << "Seleccionaste la Opción 3" << endl;
                break;
            case 4:
                cout << "Seleccionaste la Opción 4" << endl;
                break;     
            case 5:
                cout << "Seleccionaste la Opción 5" << endl;
                break;       
            case 6:
                cout << "Seleccionaste la Opción 6" << endl;
                break;
            case 7:
                cout << "Seleccionaste la Opción 7" << endl;
                break;
            case 8:
                cout << "Seleccionaste la Opción 8" << endl;
                break;
            case 9:
                cout << "Seleccionaste la Opción 9" << endl;
                break;
            case 10:
                cout << "Seleccionaste la Opción 10" << endl;
                break;     
            case 11:
                cout << "Seleccionaste la Opción 11" << endl;
                break;       
            case 12:
                cout << "Seleccionaste la Opción 12" << endl;
                break;
            case 13:
                cout << "Seleccionaste la Opción 13" << endl;
                break;
            case 14:
                cout << "Seleccionaste la Opción 14" << endl;
                break;     
            case 15:
                cout << "Seleccionaste la Opción 15" << endl;
                break;       
            case 16:
                cout << "Seleccionaste la Opción 16" << endl;
                break;
            case 17:
                cout << "Seleccionaste la Opción 17" << endl;
                break;
            case 18:
                cout << "Seleccionaste la Opción 18" << endl;
                break;
            case 19:
                cout << "Seleccionaste la Opción 19" << endl;
                break;
            case 20:
                cout << "Seleccionaste la Opción 20" << endl;
                break;
            case 21:
                cout << "Saliendo del programa. ¡Hasta luego!" << endl;
                break;
            default:
                cout << "Elección inválida. Por favor, selecciona una opción válida." << endl;
        }
    } while (elecion != 21);

    return 0;
}
