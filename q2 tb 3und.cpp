#include <iostream>

int main() {
    int p, r;
    std::cout << "INFORME POSI��O DA PORTA P (0 OU 1): ";
    std::cin >> p;
    std::cout << "INFORME POSI��O DA PORTA R (0 OU 1): ";
    std::cin >> r;

    if ((p != 0 && p != 1) || (r != 0 && r != 1)) {
        std::cout << "Uma ou mais portas com posi��es inv�lidas!" << std::endl;
    } else {
        if (p == 0 && r == 0) {
            std::cout << "CAMINHO DE SA�DA: A" << std::endl;
        } else if (p == 1 && r == 0) {
            std::cout << "CAMINHO DE SA�DA: B" << std::endl;
        } else if (p == 0 && r == 1) {
            std::cout << "CAMINHO DE SA�DA: C" << std::endl;
        } else if (p == 1 && r == 1) {
            std::cout << "CAMINHO DE SA�DA: C" << std::endl;
        }
    }

    return 0;
}

