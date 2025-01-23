#include <iostream>
using namespace std;

int main() {
    double numero;

    cout << "Digite um número: ";
    cin >> numero;

    double metade = numero / 2;
    double triplo_da_metade = 3 * metade;

    cout << "O triplo da metade de " << numero << " é: " << triplo_da_metade << endl;

    return 0;
}