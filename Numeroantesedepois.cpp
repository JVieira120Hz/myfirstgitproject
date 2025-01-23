#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Digite um número: ";
    cin >> numero;

    cout << "O número anterior é: " << numero - 1 << endl;
    cout << "O número seguinte é: " << numero + 1 << endl;

    return 0;
}