#include <iostream>
using namespace std;

void multiplicarArray(int array[], int tamanho, int valor) {
    
    cout << "Array antes da multiplicação por " << valor << ": ";
    for (int i = 0; i < tamanho; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    
    for (int i = 0; i < tamanho; ++i) {
        array[i] *= valor;
    }

    
    cout << "Array depois da multiplicação por " << valor << ": ";
    for (int i = 0; i < tamanho; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    
    int meuArray[] = {1, 2, 3, 4, 5};
    int tamanhoDoArray = sizeof(meuArray) / sizeof(meuArray[0]);
    int valorMultiplicador = 2;

    multiplicarArray(meuArray, tamanhoDoArray, valorMultiplicador);

    return 0;
}


    
 



