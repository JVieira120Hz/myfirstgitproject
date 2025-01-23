#include <iostream>

using namespace std;

float notas [10] = {1,2,3,4,5,6,7,8,9,10}

int main(){

    float soma=0, media=0;

    for (int n=0; n<10; n++){
        soma += notas[n];

    }

    cout << soma/10 << endl;


}