#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){

    string frase;

    cout << "Digite uma frase: ";
    getline(cin, frase);

    for(int i = 0; i < frase.length(); i++){
        char c = frase[i];
        char lower = tolower(c);

        if ( lower == 'a'){
            frase [i] = '*';
        }
    }

        cout << "Sua frase modificada fica: " << frase << endl;

        return 0;

}