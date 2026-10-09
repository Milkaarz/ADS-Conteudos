#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){

    string palavra;
    cout << "Digite uma palavra: ";
    cin >> palavra;

    int contadorVogais = 0;

   
    for (int i = 0; i < palavra.length(); i++) {
        char c = palavra[i];
        char lower = tolower(c); 
        
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            contadorVogais++; 
        }
    }

    cout << "Quantidade de vogais: " << contadorVogais << endl;

    return 0;
}