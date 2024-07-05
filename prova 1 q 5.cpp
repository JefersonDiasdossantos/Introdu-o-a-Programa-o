#include <iostream>
#include <clocale>

#include <iostream>
 using namespace std;
 int main() {
 float sm, nm, pos, neg;
 pos = 0;
 neg = 0;
 sm = 0;
 for(int i = 0; i < 20; i++) {
 cout<<"Informe o "<<i+1<<"° numero:";
 cin>>nm;
 sm = sm + nm;

 if (nm> 0) {
 pos = pos + 1;
 }
 if (nm< 0) {
 neg = neg + 1;
 }
 }

 cout<<"Media:"<<sm/20<<endl;
 cout<<"Pos:"<<pos<<endl;
 cout<<"Neg:"<<neg<<endl;
 cout<<"Percentual pos:"<<(pos/20)*100<<endl;
cout<<"Percentual neg:"<<(neg/20)*100;
 return 0;
 }
