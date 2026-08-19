#include <iostream>
#include <string>
 
using namespace std;

int main(){

    int salario;
    
    std::cout << "Insira o valor do seu salario: "<< endl;
    std::cin >> salario;


    if (salario = 20000){
        std::cout << "Insento";
    } else if (salario > 20001 && salario < 50000){
        std::cout << "10% de imposto" << endl;
    } else if (salario > 50000){
        std::cout << "20 % de imposto";
    }

    return 0;


}
