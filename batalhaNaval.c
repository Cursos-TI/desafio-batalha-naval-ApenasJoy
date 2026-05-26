#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    //Declarando as variáveis
    int tabuleiro[10][10];
    char *topo[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G','H', 'I', 'J'};

    //Apresentando o nome do jogo
    printf("     Batalha Naval!\n\n");

    printf("Posiciando os navios...\n");
    //Aplicando um array de A a J para representar o topo do tabuleiro
    printf("   ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", topo[i]);
    }
    printf("\n");

    //Exibindo o tabuleiro
    for ( int i = 0; i < 10; i++) {
        //Aplicando uma coluna enumerada de 1 a 10 para representar a lateral do tabuleiro
        printf("%d ", i + 1);

        for (int j = 0; j < 10; j++) {

        // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
        //Trabalhando com operadores ternários para posicionar os navios
        //Há quatro navios no tabuleiro, incluindo dois na diagonal.
        tabuleiro[i][j] = ((i == 5 && j >= 2 && j <= 4) || 
                            (j == 7 && i >= 6 && i <= 8) ||
                            (i == j && j < 3) ||
                            (i + j == 9 && i < 3) ? 3 : 0);

        printf(" %d", tabuleiro[i][j]);
    }
    printf("\n");
    }
    
    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    //Apresentando o nome do jogo
    printf("\nAtacando as embarcações...\n");

    //Aplicando, mais uma vez, um array de A a J para representar o topo do tabuleiro
    printf("   ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", topo[i]);
    }
    printf("\n");

    //Exibindo o tabuleiro
    for (int i = 0; i < 10; i++) {
        //Aplicando, novamente, uma coluna enumerada de 1 a 10 para representar a lateral do tabuleiro
        printf("%d ", i + 1);

        for (int j = 0; j < 10; j++) {
            //Trabalhandom, desta vez, com estruturas if e else para posicionar os ataque
            if (
            //Ataque em formato de cone
            (i == 0 && j == 3) || 
            (i == 1 && j >= 2 && j <= 4) || 
            (i == 2 && j >= 1 && j <= 5) ||
            //Ataque em formato de cruz
            (i == 3 && j == 8) || 
            (i == 4 && j >= 7 && j <= 9) || 
            (i == 5 && j == 8) ||
            //Aqtaque em formato de octaedro
            (i == 4 && j == 3) ||
            (i == 5 && j >= 2 && j <= 4) ||  
            (i == 6 && j >= 1 && j <= 5) ||
            (i == 7 && j >= 2 && j <= 4) ||  
            (i == 8 && j == 3)) {
                
                tabuleiro[i][j] = 3; 
            } else {
                tabuleiro[i][j] = 0;
            }
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
