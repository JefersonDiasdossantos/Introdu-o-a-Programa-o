#include <iostream>
#include <locale>
using namespace std;
int main () {
	setlocale(LC_ALL,"portuguese");
	float valor1, valor2, media;
	cout<<"digite um valor:";
	cin>>valor1;
	cin>>valor2;
	media = (valor1+valor2)/4;
	cout<<media;
	cout<<"a media e:"<<media;
	
	return 0 ;
}

