# Jogo da Velha em C

Este projeto implementa um jogo da velha (tic-tac-toe) em linguagem C, permitindo que um jogador humano jogue contra o computador.

## Funcionalidades

- **Adicionar Jogadas**: Permite que o jogador humano escolha uma posição no tabuleiro.
- **Jogadas do Computador**: O computador faz jogadas aleatórias em posições livres.
- **Verificação de Vitória**: Verifica se um jogador venceu após cada jogada.
- **Verificação de Empate**: Verifica se o jogo terminou em empate.

## Como Usar

1. Clone o repositório:
    ```bash
    git clone https://github.com/MateusDBarros/jogo-da-velha.git
    ```
2. Abra o projeto em sua IDE preferida. Certifique-se de que todos os arquivos necessários estejam na mesma pasta.

3. Compile o código:
    ```bash
    gcc -o jogo-da-velha main.c
    ```
4. Execute o programa:
    ```bash
    ./jogo-da-velha
    ```

## Estrutura do Projeto

- **main.c**: Contém a implementação principal do jogo da velha.
- **Funções**:
  - `void inicializar(char tabuleiro[3][3])`: Inicializa o tabuleiro.
  - `void mostrarTabuleiro(char tabuleiro[3][3])`: Exibe o tabuleiro.
  - `void jogador(char tabuleiro[3][3], char j1)`: Recebe a jogada do jogador.
  - `void computador(char tabuleiro[3][3], char j2)`: Faz a jogada do computador.
  - `int vencedor(char tabuleiro[3][3], char j1, char j2)`: Verifica se há um vencedor.
  - `int empate(char tabuleiro[3][3])`: Verifica se o jogo terminou em empate.

## Exemplo de Uso

Ao executar o programa, será apresentada a seguinte interface de menu:
