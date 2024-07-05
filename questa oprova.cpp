#include <iostream>
#include <locale>
#include <cmath>
using namespace std;
int main () {
	setlocale(LC_ALL,"portuguese");
	cout<<"qual seu peso (em kg)";
	cin >>"peso";
	cout<<"agua"<<peso*0.05<<"l"<<endl;
	cout<<"carbo"<<peso*0.006<<"kg"<<endl;
	cout<<"prot"<<peso*0.0025<<"kg"<<endl;
	return 0;
