#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int codigo1, numero1, codigo2, numero2;
    double valor1, valor2;

    // Lê os dados da primeira peça
    cin >> codigo1 >> numero1 >> valor1;

    // Lê os dados da segunda peça
    cin >> codigo2 >> numero2 >> valor2;

    // Calcula o valor total a ser pago
    double total = (numero1 * valor1) + (numero2 * valor2);

    // Define a precisão da saída para 2 casas decimais
    cout << fixed << setprecision(2);

    // Imprime o valor total a ser pago no formato especificado
    cout << "VALOR A PAGAR: R$ " << total << endl;

    return 0;
}
    
