#include <iostream>
 
using namespace std;
 
#include <string>

int main() {
    int monthNumber;
    std::cin >> monthNumber;

    // Verifica se o n�mero est� no intervalo v�lido
    if (monthNumber < 1 || monthNumber > 12) 
        std::cout << "Invalid input" << std::endl;
        return 1;
    }

    // Array de strings com os nomes dos meses
