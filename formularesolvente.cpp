#include <iostream>
#include <cmath>


using namespace std;

void formularesolvente(float b, float a, float c){
cout << "b: " << endl;
cin >> b;
cout << "a: " << endl;
cin >> a;
cout << "c: " << endl;
cin >> c;
float x1, x2;
x1 = (-b+sqrt((b*b ) -(4*a*c))) /(2*a);
x2 = (-b-sqrt((b*b ) -(4*a*b))) /(2*a);
cout << "x1: " << x1 << endl;
cout << "x2: " << x2 << endl;
}

int main(){

 formularesolvente(2,6,5);


 return 0;
}