#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int codigo1, numero1, codigo2, numero2;
    double valor1, valor2;

    // L� os dados da primeira pe�a
    cin >> codigo1 >> numero1 >> valor1;

    // L� os dados da segunda pe�a
    cin >> codigo2 >> numero2 >> valor2;

    // Calcula o valor total a ser pago
    double total = (numero1 * valor1) + (numero2 * valor2);

    // Define a precis�o da sa�da para 2 casas decimais
    cout << fixed << setprecision(2);

    // Imprime o valor total a ser pago no formato especificado
    cout << "VALOR A PAGAR: R$ " << total << endl;

    return 0;
}
    
