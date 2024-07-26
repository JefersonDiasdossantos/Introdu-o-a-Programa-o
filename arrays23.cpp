#include <iostream>
#include <clocale>
#include <cstdlib>

using namespace std;
int main(){ 
int dados [10]={3,1,5,9,25,63,1,2,3,6};
int posicao, valor;
cout<<"qual novo valor?";
cin>>valor;
cout<< "Informe uma posição:[1-10]";
cin>>posicao;
dados[posicao-1] = valor;
for (int i=0;i <10; i++){
	cout<<i+1<<"posiçao ="<<dados[i]<<endl;
	
}

	
	
	
	
	
	return 0;
}
