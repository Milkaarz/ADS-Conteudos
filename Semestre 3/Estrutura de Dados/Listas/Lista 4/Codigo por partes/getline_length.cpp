#include  <iostream>
#include <string>

using namespace std;

int main(){

    string nome;
    
    cout << "Informe seu nome: ";
    getline(cin, nome);

    cout << "seu nome e: " << nome << endl;
    cout << "seu nome tem " << nome.length() << " letras." << endl;

    return 0;

}