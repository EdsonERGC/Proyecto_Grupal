#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {

	char res;
	
	do{
	
	cout << "!Generardor Pass!\n"<<endl;
	
    int length;
    cout << "Ingrese la longitud de la pass: ";
    cin >> length;
    if (length <= 0) {
        cout << "Invalid length. Exiting...\n";
        return 1;
    }
    string chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                  "abcdefghijklmnopqrstuvwxyz"
                  "0123456789"
                  "!@#$%^&*()-_=+[]{}|;:,.<>?";
    srand(time(NULL));
    string password;
    for (int i = 0; i < length; i++) {
        int r = rand() % chars.length();
        password += chars[r];
    }
    cout << "Password Generada: \n" << password << "\n";
    
    
    cout << "\nDesea generar otra Pass? (S/N): "<<endl;
    cin >> res;
    }while(res== 'S' || res=='s');
	
	return 0;
};
