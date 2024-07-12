#include <iostream>
using namespace std;
int main() {
	    
    const int tamanho = 10;
    
    
    int array[tamanho] = {23,12,8,1,5,-4,-22,11,-14};
    
    
    int soma = 0;
    
    
    for (int i = 0; i < tamanho; ++i) {
        soma += array[i];
    }
    
    
    cout << "A soma é: " << soma << endl;

    return 0;
}

    
 



