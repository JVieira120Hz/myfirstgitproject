#include <iostream>

#define CONSTANTE_PLANK 6.62607015e-34

using namespace std;

float calculoEnergiadefotoes(float f, float h=CONSTANTE_PLANK){

    return h*f;
}

int main(){

    system("clear");
    float f;
    cout << "Frequência:";
    cin >> f;
    cout << "energia: " << calculoEnergiadefotoes(f, 6.63e-34) << endl;


    return 0;
}