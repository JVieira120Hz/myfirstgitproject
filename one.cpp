#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    string prefixos[] = {"Super", "Mega", "Ultra", "Master", "John", "Josh"};
    string sufixos[] = {"_120Hz", "_165Hz", "_240Hz", "_QHD", "_DVD", "_BlueRay"};

    int numPrefixos = sizeof(prefixos) / sizeof(prefixos[0]);
    int numSufixos = sizeof(sufixos) / sizeof(sufixos[0]);

    srand(time(0));

    int indicePrefixo = rand() % numPrefixos;
    int indiceSufixo = rand() % numSufixos;

    string nickname = prefixos[indicePrefixo] + sufixos[indiceSufixo];

    cout << "O nickname gerado é: " << nickname << endl;
    cout << "Gostaste desse nickname? (Sim/Não): ";

    string resposta;
    cin >> resposta;


    while (true) {
        if (resposta == "Sim" || resposta == "sim") {
            cout << "Obrigado por aceitares o nickname!" << endl;
            break;
        } else if (resposta == "Não" || resposta == "não") {
            cout << "A gerar um novo nickname..." << endl;
           
            indicePrefixo = rand() % numPrefixos;
            indiceSufixo = rand() % numSufixos;

            nickname = prefixos[indicePrefixo] + sufixos[indiceSufixo];
            cout << "O novo nickname é: " << nickname << endl;
            cout << "Gostaste desse nickname? (Sim ou Não): ";
            cin >> resposta;
        } else {
            cout << "Resposta inválida. Por favor, responde com 'Sim' ou 'Não'.: ";
            cin >> resposta;
        }
    }
    return 0;
}