#include <stdio.h>

int main(void){
    //Inicio do jogo de batalha naval
    int Casas[10][10] = {0};
    int Navio1[3] = {3,3,3};
    int Navio2[3] = {2,2,2};
    int i, j;
    printf("Bem vindo ao jogo de batalha naval!\n");
    printf("O tabuleiro possui 10 linhas e 10 colunas.\n");
    printf("Voce possui 2 navios de tamanho 3.\n");
    printf("Vamos definir a posicao dos navios!\n");
    while(1){
    printf("Digite a linha e a coluna de inicio do primeiro navio (tamanho 3), lembre-se que o primeiro navio e sempre posicionado na horizontal!: \n");
    printf("Linha: ");
    scanf("%d", &i);
    printf("Coluna: ");
    scanf("%d", &j);
    i--;
    j--;
    if (i < 0 || i >= 10 || j < 0 || j > 7){
        printf("Posicao invalida, digite uma posicao dentro do tabuleiro!\n"); // verifica se a posicao esta dentro do tabuleiro
        continue;
    } else if (Casas[i][j] || Casas[i][j+1] || Casas[i][j+2]){
            printf("Posicao ja ocupada, digite outra posicao!\n"); // verifica se a posicao ja esta ocupada
            continue;
    } else {
        printf("Posicoes definidas!\n");
        printf("Linha: %d\n", i+1);
        printf("Coluna: %d\n", j+1);
    }
    for (int k = 0; k < 3; k++){
        Casas[i][j+k] = Navio1[k]; // posiciona o navio na posicao definida
    }
    break;
    }
    while (1){
    printf("Digite a linha e a coluna de inicio do segundo navio (tamanho: 3), lembre-se que o segundo navio e sempre posicionado na vertical!: ");
    printf("Linha: ");
    scanf("%d", &i);
    printf("Coluna: ");
    scanf("%d", &j);
    i--;
    j--;
    if (i < 0 || i > 7 || j < 0 || j > 9){
        printf("Posicao invalida, digite uma posicao dentro do tabuleiro!\n"); // verifica se a posicao esta dentro do tabuleiro
        continue;
    } 
        else if (Casas[i][j] || Casas[i+1][j] || Casas[i+2][j]){
        printf("Posicao ja ocupada, digite outra posicao!\n"); // verifica se a posicao ja esta ocupada
        continue;
        } else {
        printf("Posicoes definidas!\n");
        printf("Linha: %d\n", i+1);
        printf("Coluna: %d\n", j+1);
    }
    for (int k = 0; k < 3; k++){
        Casas[i+k][j] = Navio2[k]; // posiciona o navio na posicao definida
    }
    break;
    }
    printf("\n ");
    printf("\n ");
    printf("\n ");

    printf("Tabuleiro:\n");

    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            printf("%2d", Casas[linha][coluna]);
        }
        printf("\n ");
    }
// prinft("Posicao dos navios definida com sucesso!\n");
// printf("Vamos comecar o jogo!\n");
    return 0;
}