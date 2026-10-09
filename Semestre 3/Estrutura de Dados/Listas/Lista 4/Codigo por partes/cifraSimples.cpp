#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){

    string palavra;

    cout << "Digite uma palavra: ";
    getline(cin, palavra);

    for(int i = 0; i < palavra.length(); i++){
        
        char c = palavra[i];
        char lower = tolower(c);
          
        if(i < 3){
          palavra[i] = palavra[i] + 1;
        } else if(i >= 3) {
           palavra[i] = palavra[i] - 1;
        } 

    }
    
         cout << "Sua palavra cifrada e: " << palavra << endl;
    
    return 0;

}