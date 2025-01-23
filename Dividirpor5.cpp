#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Digite um número: ";
    cin >> numero;

    if (numero % 5 == 0) {
        cout << "O número " << numero << " é divisível por 5." << endl;
    } else {
        cout << "O número " << numero << " não é divisível por 5." << endl;
    }

    return 0;
}