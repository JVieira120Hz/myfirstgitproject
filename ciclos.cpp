#include <iostream>

using namespace std;


int main(){


struct carro {
string marca;
string matricula;
};

carro carros[] = {

{"fiat", " "},
{"mercedes", " "},
{"mercedes", " "},
{"mercedes", " "},
{"mercedes", " "}

};


for( carro c : carros){

cout << "Digita a matricula para o: " << c.marca << "  ";
cin >> c.matricula;
}

cout << carros[0].marca << "  " <<
        carros[0].matricula;



    return 0;
}