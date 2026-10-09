#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){

    string frase;
    int quantidadeDeVogais = 0;
    int quantidadeConsoantes = 0;
    
    
    cout << "Digite uma frase: ";
    getline(cin, frase);

    string fraseCifrada = frase;
    string fraseAlteradaVogais = frase;

    for(int i = 0; i < frase.length(); i++){
    
        char c = frase[i];
        char lower = tolower(c);

        if(lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u' ){
            quantidadeDeVogais++;
        } else {
            quantidadeConsoantes++;
        }

    }

    for(int i = 0; i < fraseCifrada.length(); i++){
        if(i < 3){
            fraseCifrada[i] = fraseCifrada[i] + 3;
        } else {
            fraseCifrada[i] = fraseCifrada[i] - 3;
        }
    }

    for(int i = 0; i < fraseAlteradaVogais.length(); i++){
        char lower = tolower(fraseAlteradaVogais[i]);
        
        if(lower == 'a' || lower == 'i'){
            fraseAlteradaVogais[i] = 'b';
        } else if(lower == 'e' || lower == 'o' || lower == 'u'){
            fraseAlteradaVogais[i] = '3';
        }
    }

    string adicional = "chuvanao";
    string concatenada = frase + adicional;
    

    cout << "\n--- Resultados Finais ---" << endl;
    cout << "Qtd. de caracteres: " << frase.length() << endl;
    cout << "Qtd. de vogais: " << quantidadeDeVogais << endl;
    cout << "Qtd. de consoantes: " << quantidadeConsoantes << endl;
    cout << "Frase Concatenada: " << concatenada << endl;
    cout << "Frase Alterada: " << fraseAlteradaVogais << endl;
    cout << "Frase Cifrada: " << fraseCifrada << endl;

    
        return 0;


}