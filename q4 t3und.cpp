#include <iostream>

using namespace std;

string podeConectar(int tomadas1, int tomadas2, int tomadas3, int quantidadeAparelhos) {
    
    int totalTomadas = (tomadas1 - 1) + (tomadas2 - 1) + tomadas3;
    
    
    if (totalTomadas >= quantidadeAparelhos) {
        return "TODOS OS APARELHOS PODERÃO SER CONECTADOS!";
    } else {
        return "NEM TODOS OS APARELHOS PODERÃO SER CONECTADOS!";
    }
}

int main() {
    int tomadas1, tomadas2, tomadas3, quantidadeAparelhos;

    
    cout << "Número de Tomadas (Régua 1): ";
    cin >> tomadas1;
    cout << "Número de Tomadas (Régua 2): ";
    cin >> tomadas2;
    cout << "Número de Tomadas (Régua 3): ";
    cin >> tomadas3;
    cout << "Quantidade de Aparelhos: ";
    cin >> quantidadeAparelhos;

    
    cout << podeConectar(tomadas1, tomadas2, tomadas3, quantidadeAparelhos) << endl;

    return 0;
}

