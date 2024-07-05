#include <iostream>
 #include <iostream>
 #include <locale.h>
using namespace std;
 int main () {
 setlocale(LC_ALL, "Portuguese");
 int vlr, qtd100 = 0, qtd50 = 0, qtd20 = 0, qtd10 = 0, qtd5 = 0, qtd2 = 0 qtd1=0;
 cout<<"informe um vlr a ser sacado:";
 cin>>vlr;
 while (vlr >= 100) {
 vlr = vlr - 100;
 qtd100 = qtd100 + 1;
 }
 while (vlr >= 50) {
vlr = vlr - 50;
 qtd50 = qtd50 + 1;
 }
 while (vlr >= 20) {
 vlr = vlr- 20;
 qtd20 = qtd20 + 1;
 }
 while (vlr >= 10) {
 vlr = vlr - 10;
 qtd10 = qtd10 + 1;
 }
 while (vlr >= 5) {
 vlr = vlr - 5;
 qtd5 = qtd5 + 1;
 }
 while (vlr >= 2) {
 vlr = vlr - 2;
 qtd2 = qtd2 + 1;
 }
 cout<<"Notas de 100:"<<qtd100<<endl;
 cout<<"Notas de 50:"<<qtd50<<endl;
 cout<<"Notas de 20:"<<qtd20<<endl;
 cout<<"Notas de 10:"<<qtd10<<endl;
 cout<<"Notas de 5:"<<qtd5<<endl;

 cout<<"Notas de 2:"<<qtd2<<endl;
 cout<<"Notas de 1:"<<vlr<<endl;
}

