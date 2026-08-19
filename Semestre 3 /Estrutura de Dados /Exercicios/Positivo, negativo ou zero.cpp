#include <iostream>

using namespace std;

int main() {
    float numero;

    cout << "Digite um numero: ";
    cin >> numero;

    if (numero > 0) {
        cout << "O numero eh positivo." << endl;
    } else if (numero < 0) {
        cout << "O numero eh negativo." << endl;
    } else {
        cout << "O numero eh zero." << endl;
    }

    return 0;
}
