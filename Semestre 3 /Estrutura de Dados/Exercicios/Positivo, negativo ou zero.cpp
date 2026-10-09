#include <iostream>

using namespace std;

int main() {
    float numero;

    std::cout << "Digite um numero: " << std::endl;
    std::cin >> numero;

    if (numero > 0) {
        std::cout << "O numero eh positivo." << endl;
    } else if (numero < 0) {
        std::cout << "O numero eh negativo." << endl;
    } else {
        std::cout << "O numero eh zero." << endl;
    }

    return 0;
}
