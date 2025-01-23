#include <iostream>
using namespace std;

int main() {
    int altura;

    cout << "Digite a altura do triângulo: ";
    cin >> altura;
    
    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= altura - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}