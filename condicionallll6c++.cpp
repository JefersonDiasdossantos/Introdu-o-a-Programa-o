#include <iostream>
#include <clocale>

using namespace std;
int main () {
	setlocale(LC_ALL,"portuguese");
	int numero;
	float metade;
	cin>>numero;
	if (numero > 20){
	metade = (float)numero / 2;
	cout<<"metade:"<<metade;
	}
	

	return 0;
}
	
   
	
	
	
	
	



