#include <iostream>
 using namespace std;
 int main() {
 string nm1, nm2, nm3;
 float tmp1, tmp2, tmp3;
 cout<<"Informe o nome e tempo do primeiro atleta:";
 cin>>nm1>>tmp1;
 cout<<"Informe o nome e tempo do segundo atleta:";
 cin>>nm2>>tmp2;
 cout<<"Informe o nome e tempo do terceiro atleta:";
 cin>>nm3>>tmp3;

 if ((tmp1 < tmp2) && (tmp1 < tmp3)) {
 if (tmp2 < tmp3) {
 cout<<nm1<<" "<<nm2<<" "<<nm3;
 } else {
 cout<<nm1<<" "<<nm3<<" "<<nm2;
 }
 }
 if ((tmp2 < tmp1) && (tmp2 < tmp3)) {
 if (tmp1 < tmp3) {
 cout<<nm2<<" "<<nm1<<" "<<nm3;
 } else {
 cout<<nm2<<" "<<nm3<<" "<<nm1;
 }
 }
 if ((tmp3 < tmp1) && (tmp3 < tmp2)) {
 if (tmp1 < tmp2) {
 cout<<nm3<<" "<<nm1<<" "<<nm2;
} else {
 cout<<nm3<<" "<<nm2<<" "<<nm1;
 }
 }
 return 0;
 }
