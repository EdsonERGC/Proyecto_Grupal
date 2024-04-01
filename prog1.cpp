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