#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

#define MAX_NUMBER       75 + 1
#define MAX_NUM_OF_CARDS 5

int tmpCard[25];

struct numero{
    int num;
    bool sts;
};

numero painel[MAX_NUMBER];

int main(){

    for(int i = 0; i < 25; i++){
        tmpCard[i] = rand() % MAX_NUMBER;
        for(int j = 0; j < i; j++){
            if(tmpCard[i] == tmpCard[j]){
                i--;
                break;
            }
        }
    }

    for(int i = 0; i < 25; i++){
        cout << tmpCard[i] << " ";
        if((i + 1) % 5 == 0)cout << endl;
    }

    int num = rand() % MAX_NUMBER;
    if(painel[num-1].sts == false){
        painel[num-1].sts = true;
    }




    return 0;
}
