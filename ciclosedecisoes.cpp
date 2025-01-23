#include <iostream>

using namespace std;

struct Vogal{
    char vogal;
    int numero;
};


char vogal[5] {'a','e','i','o','u'};
 

int main(){

for(char vogal : vogal){
int numero;

cout << "Mostra um número para a vogal:" << vogal << endl;

cin >> numero;

cout << "O Numero da vogal " << vogal << " é: " << numero << endl;

}


return 0;
}
