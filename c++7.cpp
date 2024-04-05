#include <iostream>
#include <locale>
#include <iomanip>
using namespace std;
int main () {
	setlocale(LC_ALL,"portuguese");
	float valor;
	cout<<"informe valor";
	cin>>valor;
	cout<<fixed<<setprecision(2);
	cout<<valor;
	
	
	
	
	

	
	
	return 0 ;
}

