#include <iostream>

using namespace std;

int main() {
    char palavra[] = "programação"; 
    int tentativas = 6;
    int tamanhoPalavra = 11;
    bool letrasDescobertas[11] = {false};

    cout << "Bem-vindo ao Jogo da Forca!" << endl;

    while (tentativas > 0) {
        cout << "\nTentativas restantes: " << tentativas << endl;
        for (int i = 0; i < tamanhoPalavra; i++) {
            if (letrasDescobertas[i]) {
                cout << palavra[i] << " ";
            } else {
                cout << "_ ";
            }
        }
        cout << endl;


        char letra;
        cout << "Digite uma letra: ";
        cin >> letra;

        bool letraEncontrada = false;


        for (int i = 0; i < tamanhoPalavra; i++) {
            if (palavra[i] == letra && !letrasDescobertas[i]) {
                letrasDescobertas[i] = true;
                letraEncontrada = true;
            }
        }
        if (!letraEncontrada) {
            tentativas--;
            cout << "A letra '" << letra << "' não está na palavra!" << endl;
        } else {
            cout << "Boa! Você acertou a letra '" << letra << "'." << endl;
        }
        
        bool ganhou = true;
        for (int i = 0; i < tamanhoPalavra; i++) {
            if (!letrasDescobertas[i]) {
                ganhou = false;
                break;
            }
        }
        
        if (ganhou) {
            cout << "\nParabéns! Você ganhou!" << endl;
            for (int i = 0; i < tamanhoPalavra; i++) {
                cout << palavra[i] << " ";
            }
            cout << endl;
            break;
        }
    }

    if (tentativas == 0) {
        cout << "\nVocê perdeu! A palavra era: " << palavra << endl;
    }

    return 0;
}
