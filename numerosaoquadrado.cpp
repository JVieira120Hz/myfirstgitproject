#include <iostream>
using namespace std;

int main() {
    double numero;

    cout << "Digite um numero: ";
    cin >> numero;

    double quadrado = numero * numero;

    cout << "O quadrado de " << numero << " e: " << quadrado << endl;

    return 0;
}