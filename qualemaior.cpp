#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Digite o primeiro número: ";
    cin >> num1;

    cout << "Digite o segundo número: ";
    cin >> num2;

    if (num1 > num2) {
        cout << "O primeiro número (" << num1 << ") é maior que o segundo número (" << num2 << ")." << endl;
    } else if (num1 < num2) {
        cout << "O segundo número (" << num2 << ") é maior que o primeiro número (" << num1 << ")." << endl;
    } else {
        cout << "Os dois números são iguais." << endl;
    }

    return 0;
}