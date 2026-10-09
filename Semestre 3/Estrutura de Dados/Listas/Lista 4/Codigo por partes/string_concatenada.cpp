#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string jogo;
    
    cout << "Qual seu jogo favorito: ";
    getline(cin, jogo);

    string limitada = " - Edicao Limitada";
    string jogoNew = jogo + limitada;

    cout << "Resultado: " << jogoNew << endl;

    return 0;
}