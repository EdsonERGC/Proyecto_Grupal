#include <iostream>
#include <cmath>
#include <string>
#include <ctime>
#include <cstdlib>
#include <bits/stdc++.h>
#include <vector>
#include <thread>
#include <chrono>
#include <vector>
#include <string>
#include <algorithm>



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

              int num1, num2, suma, resta, mult, div;
	
		cout<<"ingrese numero:";
		cin>>num1;
		cout<<"ingrese numero.";
		cin>>num2;
	
		suma= num1+num2;
		resta=num1- num2;
		mult=num1*num2;
		div= num1/num2;
	
		cout<<"la suma es:"<<suma<<endl;
		cout<<"La resta es:"<<resta<<endl;
		cout<<"La mult es:"<<mult<<endl;
		cout<<"La div es:"<<div<<endl;
	
		

                break;
            case 2:
 cout << "Seleccionaste la Opción 2" << endl;

 	int numero;
 	
 	cout<<"Digite un numero:";
 	cin>>numero;
 	
 	if(numero==0){
 		cout<<"El numero es cero:";
 		
	 }
 	else if(numero%2==0){
 		cout<<"El numero es par:";
 		
 		
	 }
	 else{
	 	cout<<"El numero es impar:";
	 }
 	
 	

                break;
            case 3:
                

cout << "Seleccionaste la Opción 3" << endl;


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

    
}

               
                break;
            case 4:
 cout << "Seleccionaste la Opción 4" << endl;

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

    
}

       
                break;     
            case 5:
	cout << "Seleccionaste la Opción 5" << endl;
             



	int numero, unidades, decenas, centenas, millar;
	
	printf("INGRESE EL NUMERO ARABIGO:");
	scanf("%i",&numero);
	unidades=numero%10; numero=numero/10;
	decenas=numero%10; numero=numero/10;
    centenas=numero%10; numero=numero/10;
    millar=numero%10; numero=numero/10;
     
	 
	 switch (millar)
{
    
	case 1: printf("m");break;
	case 2: printf("mm");break;
	case 3: printf("mmm");break;
	

} 
	 

	
	switch(centenas) {
		
		case 1: printf("c");break;
		case 2: printf("cc");break;
		case 3: printf("ccc");break;
		case 4: printf("cd");break;
		case 5: printf("d");break;
		case 6: printf("dc");break;
		case 7: printf("dcc");break;
		case 8: printf("dccc");break;
		case 9: printf("cm");break;
	}
	
	switch(decenas){
		
		case 1: printf("x");break;
		case 2: printf("xx");break;
		case 3: printf("xxx");break;
		case 4: printf("xL");break;
		case 5: printf("L");break;
		case 6: printf("LX");break;
		case 7: printf("LXX");break;
		case 8: printf("LXXX");break;
		case 9: printf("CX");break;
		
	}

	   switch(unidades) {
	 	case 1: printf("I");break;
	 	case 2: printf("II");break;
        case 3: printf("III");break;
	 	case 4: printf("IV");break;
	 	case 5: printf("V");break;
	 	case 6: printf("VI");break;
	 	case 7: printf("VII");break;
	 	case 8: printf("VIII");break;
	 	case 9: printf("IX");break;


	 	
	 }



	
		
	
	
}
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



vector<int> decimalABinario(int decimal) {
    vector<int> binario;
    
    while (decimal > 0) {
        int residuo = decimal % 2;
        binario.insert(binario.begin(), residuo); 
        decimal /= 2;
    }
    
    return binario;



    int numeroDecimal;
    
    cout << "Ingrese un número decimal: ";
    cin >> numeroDecimal;
    
    vector<int> numeroBinario = decimalABinario(numeroDecimal);
    
    cout << "El número binario equivalente es: ";
    for (int digito : numeroBinario) {
        cout << digito;
    }
    cout << endl;





                break;       
            case 12:
                cout << "Seleccionaste la Opción 12" << endl;


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


    int numeroDecimal;
    cout << "Ingrese un número decimal: ";
    cin >> numeroDecimal;
    
    vector<char> numeroHexadecimal = Hexadecimal(numeroDecimal);
    
    cout << "El número hexadecimal equivalente es: ";
    for (char digito : numeroHexadecimal) {
        cout << digito;
    }
    cout << endl;



                break;
            case 13:
                cout << "Seleccionaste la Opción 13" << endl;


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





                break;
            case 14:
                cout << "Seleccionaste la Opción 14" << endl;



    int x = 0;
    int y = 0;
    int dx = 1;
    int dy = 1;

    while (true) {
        cout << "\033[2J";
        x = (x + dx) % 80;
        y = (y + dy) % 25;

        if (x == 0 || x == 79) {
            dx *= -1;
        }
        if (y == 0 || y == 24) {
            dy *= -1;
        }

        cout << "\033[" << y + 1 << ";" << x + 1 << "H*";
        cout.flush();
        this_thread::sleep_for(chrono::milliseconds(100));
    }

    return 0;



                break;     
            case 15:
                cout << "Seleccionaste la Opción 15" << endl;
            



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






                break;
				       
            case 16:
    			int choice;
    			double side1, side2;
    			while (true) {
        		cout << "\n1. Calcular la Hipotenusa\n2. Exit\n";
        		cout << "Escoja una opcion: ";
        		cin >> choice;
        		if (choice == 1) {
            	cout << "Ingrese la longitud del primer lado: ";
            	cin >> side1;
            	cout << "Ingrese la longitud del seguno lado: ";
            	cin >> side2;
            	if (side1 <= 0 || side2 <= 0) {
                cout << "Ingreso invaldo. Por favor ingresa unicamente valores positivos \n";
            	} else {
                double hypotenuse = sqrt(pow(side1, 2) + pow(side2, 2));
                cout << "La longitud de la Hipotenusa es: " << hypotenuse << "\n";
            	}
        	} else if (choice == 2) {
            break;
        } else {
            cout << "Invalid choice. Please enter 1 or 2 only.\n";
        }
    }
}
                break;
                
            case 17:

    			int numeros_terminos;

    			cout << "Introduce el n mero de t rminos en la secuencia de Fibonacci: ";
    			cin >> numeros_terminos;

   				if (numeros_terminos <= 0) {
        		cout << "La cantidad de t rminos debe ser mayor a 0." << endl;
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

	}
                break;
                
            case 18:
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
    			string chars = 	"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
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
		};
                break;
                
            case 19:
				enum Choice {
    			ROCK, PAPER, SCISSORS,
			};

				const string choice_names[] = {"piedra", "papel", "tijeras"};
	
				Choice get_random_choice() {
    		return static_cast<Choice>(rand() % 3);
		}

			int main() {
    		srand(time(0));

    		int user_choice;

    		while (true) {
        	cout << "\nElige entre piedra (0), papel (1), o tijeras (2): ";

        	if (!(cin >> user_choice) || user_choice < 0 || user_choice > 2) {
            	cout << "Opci n inv lida. Intente nuevamente..." << endl;
            	cin.ignore();
            continue;
        	}
        break;
    	}

    	Choice computer_choice = get_random_choice();
    	string computer_choice_name = choice_names[computer_choice];

    	string user_choice_name = choice_names[user_choice];

    	if (user_choice == static_cast<int>(computer_choice)) {
       	 	cout << "Empate. Usted ha elegido " << user_choice_name << " y la computadora ha elegido " << computer_choice_name << "." << endl;
    	} else if ((user_choice - computer_choice + 3) % 3 == 2) {
       	 	cout << " Ganaste! Has elegido " << user_choice_name << " y la computadora ha elegido " << computer_choice_name << "." << endl;
    	} else {
        	cout << "Perdiste. Has elegido " << user_choice_name << " y la computadora ha elegido " << computer_choice_name << "." << endl;
    	}

    	return 0;
	};
                break;
                
            case 20:
    				srand(time(0));

    				int max = 100, min = 1, intentos = 0;

    				int numero_secreto = rand() % (max - min + 1) + min;

    			while (true) {
        			int intento;

        			cout << "Introduce un n mero entre " << min << " y " << max << ":" << endl;
        			cin >> intento;

        		if (intento >= min && intento <= max) {
            		break;
        		}
        			cout << "El n mero ingresado est  fuera de los l mites. Intenta nuevamente." << endl;

        		intentos++;
    		}

    	cout << "N mero encontrado en " << intentos << " intento(s)." << endl;

    	return 0;
	}
                break;
            
            case 21:
                cout << "Saliendo del programa. ¡Hasta luego!" << endl;
                break;
            default:
                cout << "Elección inválida. Por favor, selecciona una opción válida." << endl;
        }
    } while (elecion != 21);
}
