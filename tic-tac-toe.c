#include <time.h>

// Função que exibe o tabuleiro no console
void mostrarTabuleiro(char tabuleiro[3][3]);

// Função que inicializa o tabuleiro com espaços vazios
void inicializar(char tabuleiro[3][3]);

// Função que lida com a jogada do jogador humano
void jogador(char tabuleiro[3][3], char j1);

// Função que escolhe aleatoriamente uma posição para o computador
int escolhaComputador(void);

// Função que lida com a jogada do computador
void computador(char tabuleiro[3][3], char j2);

// Função que verifica se há um vencedor
int vencedor(char tabuleiro[3][3], char j1, char j2);

// Função que verifica se o jogo terminou em empate
int empate(char tabuleiro[3][3]);

int main(void){
    char tabuleiro[3][3];
    int turno = 1; // 1 para jogador humano, 0 para computador
    srand(time(0)); // Inicializa o gerador de números aleatórios

    // Inicializa o tabuleiro com espaços vazios
    inicializar(tabuleiro);

    // Loop principal do jogo
    while (vencedor(tabuleiro, 'X', 'O') == 1 || empate(tabuleiro) == 0) {
        // Mostra o tabuleiro atual
        mostrarTabuleiro(tabuleiro);

        // Alterna entre o jogador humano e o computador
        if (turno == 1) {
            jogador(tabuleiro, 'X');
            turno = 0;
        } else {
            computador(tabuleiro, 'O');
            turno = 1;
        }  

        // Verifica se há um vencedor ou empate
        if (vencedor(tabuleiro, 'X', 'O') == 0 || empate(tabuleiro) == 1) break;
    }
    
    // Mostra o tabuleiro final
    mostrarTabuleiro(tabuleiro);
    return 0;
}

// Inicializa o tabuleiro com espaços vazios
void inicializar(char tabuleiro[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            tabuleiro[i][j] = ' ';
        }
    }
}

// Exibe o tabuleiro no console
void mostrarTabuleiro(char tabuleiro[3][3]){
    printf(" %c | %c | %c \n", tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", tabuleiro[1][0], tabuleiro[1][1], tabuleiro[1][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", tabuleiro[2][0], tabuleiro[2][1], tabuleiro[2][2]);
}

// Lida com a jogada do jogador humano
void jogador(char tabuleiro[3][3], char j1){
    int coluna = 0;
    int linha = 0;
    
    do {
        printf("Coluna e Linha devem ser um valor entre 1 e 3!\n");
        printf("Qual posicao deseja jogar?\n");
        printf("Linha: ");
        scanf("%d", &linha);
        printf("Coluna: ");
        scanf("%d", &coluna);

        if (coluna < 1 || coluna > 3 || linha < 1 || linha > 3) {
            printf("Posicao invalida! Tente novamente.\n");
        } else if (tabuleiro[linha - 1][coluna - 1] != ' ')
            printf("Posicao ja preenchida! Tente novamente.\n");
        else tabuleiro[linha - 1][coluna - 1] = j1;
        break;
    } while (1);
}

// Lida com a jogada do computador
void computador(char tabuleiro[3][3], char j2) {
    int compColuna = escolhaComputador();
    int compLinha = escolhaComputador();

    while (tabuleiro[compLinha-1][compColuna-1] != ' ') {
        compColuna = escolhaComputador();
        compLinha = escolhaComputador();
    }
    tabuleiro[compLinha-1][compColuna-1] = j2;
}

// Escolhe aleatoriamente uma posição para o computador
int escolhaComputador(void) {
    return (rand() % 3) + 1;
}

// Verifica se há um vencedor
// Retorna: 0 se houver um vencedor, 1 caso contrário.
//j1: caractere que representa o jogador 1 (ex.: 'X').
//j2: caractere que representa o jogador 2 ou computador (ex.: 'O').
int vencedor(char tabuleiro[3][3], char j1, char j2) {
    // Verificar linhas e colunas
    for (int i = 0; i < 3; i++) {
        // Verificar linhas
        if (tabuleiro[i][0] == j1 && tabuleiro[i][1] == j1 && tabuleiro[i][2] == j1) {
            printf("Parabens, voce venceu! Obrigado por Jogar!\n");
            return 0;
        }
        if (tabuleiro[i][0] == j2 && tabuleiro[i][1] == j2 && tabuleiro[i][2] == j2) {
            printf("Vitoria do computador, Que pena, Mas sorte da proxima vez!\n");
            return 0;
        }
        // Verificar colunas
        if (tabuleiro[0][i] == j1 && tabuleiro[1][i] == j1 && tabuleiro[2][i] == j1) {
            printf("Parabens, voce venceu! Obrigado por Jogar!\n");
            return 0;
        }
        if (tabuleiro[0][i] == j2 && tabuleiro[1][i] == j2 && tabuleiro[2][i] == j2) {
            printf("Vitoria do computador, Que pena, Mas sorte da proxima vez!\n");
            return 0;
        }
    }
    // Verificar diagonais
    if (tabuleiro[0][0] == j1 && tabuleiro[1][1] == j1 && tabuleiro[2][2] == j1) {
        printf("Parabens, voce venceu! Obrigado por Jogar!\n");
        return 0;
    }
    if (tabuleiro[0][2] == j1 && tabuleiro[1][1] == j1 && tabuleiro[2][0] == j1) {
        printf("Parabens, voce venceu! Obrigado por Jogar!\n");
        return 0;
    }
    if (tabuleiro[0][0] == j2 && tabuleiro[1][1] == j2 && tabuleiro[2][2] == j2) {
        printf("Vitoria do computador, Que pena, Mas sorte da proxima vez!\n");
        return 0;
    }
    if (tabuleiro[0][2] == j2 && tabuleiro[1][1] == j2 && tabuleiro[2][0] == j2) {
        printf("Vitoria do computador, Que pena, Mas sorte da proxima vez!\n");
        return 0;
    }
    return 1;
}

//Verifica se o jogo da velha terminou em empate.
// Retorna: 1 se o jogo terminou em empate (todas as posições preenchidas sem vencedor), 0 caso contrário.
int empate(char tabuleiro[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (tabuleiro[i][j] == ' ')
                return 0; // Ainda há posições vazias, portanto, não é empate
        }
    }
    printf("Jogo Empatado! Tente novamente.\n");
    return 1; // Todas as posições estão preenchidas, é empate
}