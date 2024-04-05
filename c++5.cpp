#include <iostream>
#include <locale>
using namespace std;
int main () {
	setlocale(LC_ALL,"portuguese");
	float a,b,temp;
	cout<<"informe a";
	cin>>a;
	cout<<"informe b";
	cin>>b;
	cout<<a<<" "<<b<<endl;
	temp = a;
	a = b;
	b = temp;
	cout<<a<<" "<<b<<endl;
	
	//trocar a por b e b por a
	
	
	
	

	
	
	return 0 ;
}

