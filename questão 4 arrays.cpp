#include <iostream>
#include <climits> 
using namespace std;

void encontrarMaiorEMenor(int arr[], int tamanho) {
    if (tamanho <= 0) {
        cout << "Array vazio, não há elementos para encontrar." << endl;
        return;
    }

    int maior = INT_MIN;
    int menor = INT_MAX;

    
    for (int i = 0; i < tamanho; ++i) {
        if (arr[i] > maior) {
            maior = arr[i];
        }
        if (arr[i] < menor) {
            menor = arr[i];
        }
    }

    
    cout << "O maior é: " << maior << endl;
    cout << "O menor é: " << menor << endl;
}

int main() {
    int array[] = {3, 7, 1, 9, 4, 5, 8, 2, 6}; 
    int tamanho = sizeof(array) / sizeof(array[0]);

    encontrarMaiorEMenor(array, tamanho);

    return 0;
}



