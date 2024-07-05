#include <iostream>
 #include <locale>
 using namespace std;
 int main () {
 setlocale(LC_ALL, "Portuguese");
 int nm, sm;
 sm = 0;
 cout<<"informe um nm:";
 cin>>nm;
 while (nm != 0) {
 sm = sm + nm;
 cout<<"informe um nm:";
cin>>nm;
 }
cout<<"A soma é "<<sm<<endl;
return 0 ;
}

