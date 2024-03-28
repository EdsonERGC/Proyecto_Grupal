
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