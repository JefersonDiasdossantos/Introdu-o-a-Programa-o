2: #include <iostream>
3: using namespace std;
4: int main() {
5: float velocidadeA, velocidadeB, distancia, tempo;
6: cout<<"Velocidade do primeiro veiculo:";
7: cin>>velocA;
8: cout<<"Velocidade do segundo veiculo:";
9: cin>>velocB;
10: cout<<"Informe a Distancia entre eles:";
11: cin>>dst;
12: //SoA + VA * T = SoB + VB * T
13: //VA * T - VB * T = SoB - SoA
14: //T*(VA - VB) = SoB - SoA
15: //T = (SoB-SoA)/(VA-VB)
16: tempo = (dst - 0)/(velocA - velocB);
17: //lembrar que a velocidade de B é negativa, já que o veículo está
18: //movendo-se em sentido contrário a A, ou seja, SfB < SiB. Isso faz
19: //delta(S) que é Sf - Si, ficar negativo, negativando a Velocidade.
20: //V = delta(S)/delta(T)
21: cout<<"O tempo de encontro eh:"<<tempo;
22: return 0;
23: }
