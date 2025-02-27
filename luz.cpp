#include <iostream>

#define CONSTANTE_PLANK 6.62607015e-8

using namespace std;

float calculovelocidadedeluz(float f, float lambda){

    return f*lambda;
}

int main(){

    float f, lambda;
    cout << "Frequencia: ";
    cin >> f;
    cout << "Comprimento de onda: ";
    cin >> lambda;
    cout << "velocidadede da luz: " << calculovelocidadedeluz(f, 6.63e-8);


return 0;
}