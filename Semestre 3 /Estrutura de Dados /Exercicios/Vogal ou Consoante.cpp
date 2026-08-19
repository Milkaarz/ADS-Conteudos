#include <iostream>

using namespace std;

int main() {
    char x;

    cout << "Insira uma letra: ";
    cin >> x;

    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' ||
        x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U') {
        cout << "Essa letra e uma vogal" << endl;
    } else {
        cout << "Essa letra e uma consoante" << endl;
    }

    return 0;
}
