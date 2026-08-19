#include <iostream>

using namespace std;

int main(){

    int computador;

    std::cout << "Visão computador" << std::endl;
    std::cin >> computador;


    switch(computador){
        case 1:
        std::cout << "Visão Computacional" << endl;
        break;
        case 2:
        std::cout << "Redes Neurais" << endl;
        break;
        case 3:
        std::cout << "Enganharia de Software" << endl;
        break;
        case 4:
        std::cout << "Front-End" << endl;
        break;
        case 5:
        std::cout << "Back-End" << endl;
        break;
        case 6:
        std::cout << "Banco de Dados << endl";
        break;
        case 7:
        std::cout << "Qualide de software" << endl;
        break;
        case 8:
        std:: cout << "Inteligencia Arificial" << endl;
        break;
        case 9:
        std:: cout << "Realidade aumentada" << endl;
        break;
        default:
            std::cout << "O dia inserido � invalido" << endl;
    }

    return 0;


}
