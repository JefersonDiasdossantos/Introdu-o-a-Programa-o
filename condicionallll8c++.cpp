#include <iostream>
#include <clocale>
using namespace std;
int main () {
	setlocale(LC_ALL,"Portuguese");
	float valor;
	cout<<"Informe um valor:";
	cin>>valor;
	
	if (valor < 0) {
		valor *= -1; 
		//valor = valor * (-1);
	}
			
	cout<<"O módulo do valor informado é: ";
	cout<<valor;	
		
	return 0;
}

	
   
	
	
	
	
	



