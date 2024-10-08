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
    git clone https://github.com/MateusDBarros/tic-tac-toe.git
    ```
2. Abra o projeto em sua IDE preferida. Certifique-se de que todos os arquivos necessários estejam na mesma pasta.

3. Compile o código:
    ```bash
    gcc -o tic-tac-toe.c
    ```
4. Execute o programa:
    ```bash
    ./tic-tac-toe
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

O jogador deve inserir as coordenadas da linha e coluna onde deseja jogar, e o computador fará uma jogada em seguida. O tabuleiro será atualizado após cada jogada.

### Adicionar uma Jogada

O usuário será solicitado a inserir a linha e a coluna onde deseja jogar.

### Verificação de Vitória

O jogo verificará automaticamente se há um vencedor após cada jogada.

### Verificação de Empate

Se todas as posições estiverem preenchidas e não houver vencedor, o jogo será declarado empatado.

## Contribuindo

Se você quiser contribuir com este projeto, sinta-se à vontade para abrir pull requests e issues. Toda ajuda é bem-vinda!


## Contato

Para mais informações, entre em contato via [mb685212@gmail.com](mailto:mb685212@gmail.com) ou [linkedin](https://linkedin.com/in/mateus-barros13)
