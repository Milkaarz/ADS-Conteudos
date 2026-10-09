#include <iostream>

using namespace std;

int main(){

int numero;

std::cout << "Insira um numero: " << std::endl;
std::cin >> numero;

if (numero % 2 == 0){
    std::cout << "O numero é par" << endl;
    }else{
        std::cout << "O numero é impar" <<  endl;

    }

    return 0;


}
