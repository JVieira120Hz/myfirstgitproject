#include <iostream>
using namespace std;

int main() {
    double numero;
    
    cout << "insira um número: ";
    cin >> numero;
    
    double resultado = (numero / 2) * 2;
    
    cout << "O dobro da metade de " << numero << " é: " << resultado << endl;
    
    return 0;
}