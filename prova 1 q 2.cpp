2: #include <iostream>
3: using namespace std;
4: int main() {
5: int idade;
6: float peso;
7: cout<<"idade:";
8: cin>>idade;
9: cout<<"peso:";
10: cin>>peso;
11: if (idade >= 12) {
12: if (peso >=60) {
13: cout<<"40 gotas";
14: } else {
15: cout<<"30 gotas";
16: }
17:
18: }else {
19: cout<<(int)peso/2;
20: }
21: return 0;
22: }
