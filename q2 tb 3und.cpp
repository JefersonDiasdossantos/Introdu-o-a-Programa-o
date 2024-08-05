#include <iostream>

int main() {
    int p, r;
    std::cout << "INFORME POSIÇÃO DA PORTA P (0 OU 1): ";
    std::cin >> p;
    std::cout << "INFORME POSIÇÃO DA PORTA R (0 OU 1): ";
    std::cin >> r;

    if ((p != 0 && p != 1) || (r != 0 && r != 1)) {
        std::cout << "Uma ou mais portas com posições inválidas!" << std::endl;
    } else {
        if (p == 0 && r == 0) {
            std::cout << "CAMINHO DE SAÍDA: A" << std::endl;
        } else if (p == 1 && r == 0) {
            std::cout << "CAMINHO DE SAÍDA: B" << std::endl;
        } else if (p == 0 && r == 1) {
            std::cout << "CAMINHO DE SAÍDA: C" << std::endl;
        } else if (p == 1 && r == 1) {
            std::cout << "CAMINHO DE SAÍDA: C" << std::endl;
        }
    }

    return 0;
}

