#include <iostream>

using namespace std;


int calcularTempo(int funcionarios1, int funcionarios2, int funcionarios3, int andar) {
    int tempo = 0;
    if (andar == 1) {
        tempo = 0 + funcionarios2 * 2 + funcionarios3 * 4;
    } else if (andar == 2) {
        tempo = funcionarios1 * 2 + 0 + funcionarios3 * 2;
    } else if (andar == 3) {
        tempo = funcionarios1 * 4 + funcionarios2 * 2 + 0;
    }
    return tempo;
}

int main() {
    int funcionarios1, funcionarios2, funcionarios3;

    
    cout << "Quantidade de Funcionários (1o Andar): ";
    cin >> funcionarios1;
    cout << "Quantidade de Funcionários (2o Andar): ";
    cin >> funcionarios2;
    cout << "Quantidade de Funcionários (3o Andar): ";
    cin >> funcionarios3;

    
    int tempoAndar1 = calcularTempo(funcionarios1, funcionarios2, funcionarios3, 1);
    int tempoAndar2 = calcularTempo(funcionarios1, funcionarios2, funcionarios3, 2);
    int tempoAndar3 = calcularTempo(funcionarios1, funcionarios2, funcionarios3, 3);


    int menorTempo = min(tempoAndar1, min(tempoAndar2, tempoAndar3));


    cout << "MENOR TEMPO A SER GASTO: " << menorTempo << " min" << endl;

    return 0;
}

