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
                #include<iostream>

using namespace std;

int main(){
	int num1 = 0, num2= 0, suma =0, resta=0, mult=0, div=0;
	
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
	
		
	return 0;
}
                cout << "Seleccionaste la Opción 1" << endl;
                break;
            case 2:
                #include <iostream>

using namespace std;
 
 
 int main(){
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
 	
 	

 	return 0;
	
 }
                cout << "Seleccionaste la Opción 2" << endl;
                break;
            case 3:
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

                cout << "Seleccionaste la Opción 3" << endl;
                break;
            case 4:
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

                cout << "Seleccionaste la Opción 4" << endl;
                break;     
            case 5:
                #include <stdio.h>



int main (){
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



	
		
	
	return 0;
}
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
