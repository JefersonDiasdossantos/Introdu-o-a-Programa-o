#include <iostream>
#include <locale>
using namespace std;
int main () {
	setlocale(LC_ALL,"portuguese");
	float peso40, peso60,media;
	cout<<"informe peso40";
	cin>>peso40;
	cout<<"informe peso60";
	cin>>peso60;
	media = (peso40*4+peso60*6)/10;
	cout<<"a media ponderada é"<<media;
	
	
	return 0 ;
}

