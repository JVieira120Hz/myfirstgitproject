#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
// Função para inicializar a cartela de Bingo com números aleatórios
void inicializarCartela(int cartela[5][5]);
    bool numerosUsados[76] = {false}; // Para verificar se o número já foi sorteado

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            int num;
            do {
                num = rand() % 75 + 1; // Gera um número aleatório entre 1 e 75
            } while (numerosUsados[num]); // Verifica se o número já foi usado
            cartela[i][j] = num;
            numerosUsados[num] = true;

        
        }
    }

    cartela[2][2] = 0; // O "centro" da cartela é considerado um "espaço livre"
}

// Função para exibir a cartela de Bingo
void exibirCartela(int cartela[5][5]) {
    cout << "Cartela de Bingo: \n";
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (cartela[i][j] == 0) {
                cout << "  * ";  // Espaço livre no meio
            } else {
                cout << cartela[i][j] << "  ";
            }
        }
        cout << endl;
    }
}

// Função para marcar um número na cartela
void marcarNumero(int cartela[5][5], int numero) {
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (cartela[i][j] == numero) {
                cartela[i][j] = 0;  // Marca o número como 0 (espaço livre)
            }
        }
    }
}

// Função para verificar se alguém ganhou
bool verificarvencedor(int cartela[5][5]) {
    // Verifica linhas
    for (int i = 0; i < 5; ++i) {
        bool linhaCompleta = true;
        for (int j = 0; j < 5; ++j) {
            if (cartela[i][j] != 0) {
                linhaCompleta = false;
                break;
            }
        }
        if (linhaCompleta) return true;
    }

    // Verifica colunas
    for (int j = 0; j < 5; ++j) {
        bool colunaCompleta = true;
        for (int i = 0; i < 5; ++i) {
            if (cartela[i][j] != 0) {
                colunaCompleta = false;
                break;
            }
        }
        if (colunaCompleta) return true;
    }

    // Verifica diagonal principal
    bool diagonalPrincipalCompleta = true;
    for (int i = 0; i < 5; ++i) {
        if (cartela[i][i] != 0) {
            diagonalPrincipalCompleta = false;
            break;
        }
    }
    if (diagonalPrincipalCompleta) return true;

    // Verifica diagonal secundária
    bool diagonalSecundariaCompleta = true;
    for (int i = 0; i < 5; ++i) {
        if (cartela[i][4 - i] != 0) {
            diagonalSecundariaCompleta = false;
            break;
        }
    }
    if (diagonalSecundariaCompleta) return true;

    return false;  // Caso não tenha ganhador
}

// Função principal do jogo
int main() {
    srand(time(0));  // Inicializa o gerador de números aleatórios

    int cartela[5][5];  // Cartela de Bingo
    inicializarCartela(cartela);

    int numerosSorteados[75];  // Array para os números sorteados
    for (int i = 0; i < 75; ++i) {
        numerosSorteados[i] = i + 1;
    }

    // Embaralhar os números sorteados
    for (int i = 0; i < 75; ++i) {
        int j = rand() % 75;
        int temp = numerosSorteados[i];
        numerosSorteados[i] = numerosSorteados[j];
        numerosSorteados[j] = temp;
    }

    // Loop principal do jogo
    int indice = 0;
    bool ganhou = false;
    while (indice < 75 && !ganhou) {
        int numeroSorteado = numerosSorteados[indice++];
        cout << "\nNúmero sorteado: " << numeroSorteado << endl;
        marcarNumero(cartela, numeroSorteado);

        exibirCartela(cartela);

        ganhou = verificarvencedor(cartela);

        if (ganhou) {
            cout << "\nBingo! Você ganhou!" << endl;
        }
    }

    if (!ganhou) {
        cout << "\nO jogo terminou, mas ninguém ganhou." << endl;
    }

    return 0;
}
