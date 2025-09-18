#include <stdio.h>

int main(void){
    //Inicio do jogo de batalha naval
    int Casas[10][10] = {0};
    int tamanho;
    int i, j;
    printf("Bem vindo ao jogo de batalha naval!\n");
    printf("O tabuleiro possui 10 linhas e 10 colunas.\n");
    printf("Voce possui 2 navios de tamanho 3.\n");
    printf("Vamos definir a posicao dos navios!\n");
    while(1){
        while(1){
            printf("Digite as especificacoes do primeiro navio, lembre-se que o primeiro navio e sempre posicionado na HORIZONTAL!: \n");
            printf("Tamanho:");
            scanf("%d", &tamanho);
                if (tamanho >= 1 && tamanho <= 10){
                    break;
                }
            printf("Tamanho invalido! Lembre-se que o tabuleiro é 10x10!");
        }
    printf("Linha: ");
    scanf("%d", &i);
    printf("Coluna: ");
    scanf("%d", &j);
    i--;
    j--;
    if (i < 0 || i >= 10 || j < 0 || j > (10 - tamanho)){
        printf("Posicao invalida, digite uma posicao dentro do tabuleiro!\n"); // verifica se a posicao esta dentro do tabuleiro
        continue;
        int ocupado = 0;
        int conflito;
        for(int k = 0; k < tamanho; k++){ // percorre o caminho onde o navio será posicionado e verifica se todas as casas estao disponiveis
            if (Casas[i][j+k] !=0){
                ocupado = 1;
                conflito = k;
                break;
            }
        }
        if (ocupado){
            printf("As posicoes ([%d],[%d]) ja estao ocupadas.\n", i+1, j+conflito+1); // informa quais casas estao ocupadas
            continue;
        }
    } else {
        printf("Posicoes definidas!\n");
        printf("Linha: %d\n", i+1);
        printf("Coluna: %d\n", j+1);
    }
    for (int k = 0; k < tamanho; k++){
        Casas[i][j+k] = 1; // posiciona o navio na posicao definida
    }
    break;
    }
    while(1){
        while(1){
            printf("Digite as especificacoes do segundo navio, lembre-se que o primeiro navio e sempre posicionado na VERTICAL!: \n");
            printf("Tamanho:");
            scanf("%d", &tamanho);
                if (tamanho >= 1 && tamanho <= 10){
                    break;
                }
            printf("Tamanho invalido! Lembre-se que o tabuleiro é 10x10!");
        }
    printf("Linha: ");
    scanf("%d", &i);
    printf("Coluna: ");
    scanf("%d", &j);
    i--;
    j--;
    if (j < 0 || j >= 10 || i < 0 || i > (10 - tamanho)){
        printf("Posicao invalida, digite uma posicao dentro do tabuleiro!\n"); // verifica se a posicao esta dentro do tabuleiro
        continue;
        int ocupado = 0;
        int conflito;
        for(int k = 0; k < tamanho; k++){ // percorre o caminho onde o navio será posicionado e verifica se todas as casas estao disponiveis
            if (Casas[i+k][j] !=0){
                ocupado = 1;
                conflito = k;
                break;
            }
        }
        if (ocupado){
            printf("As posicoes ([%d],[%d]) ja estao ocupadas.\n", i+conflito+1, j+1); // informa quais casas estao ocupadas
            continue;
        }
    } else {
        printf("Posicoes definidas!\n");
        printf("Linha: %d\n", i+1);
        printf("Coluna: %d\n", j+1);
    }
    for (int k = 0; k < tamanho; k++){
        Casas[i+k][j] = 2; // posiciona o navio na posicao definida
    }
    break;
    }
    while(1){
            int posicao;
            while(1){
            printf("Digite as especificacoes do terceiro navio, lembre-se que o terceiro navio e sempre posicionado na DIAGONAL!: \n");
            printf("Primeiro diga para qual direcao esta apontada o navio:\n"
            "1 - Esquerda > Direita\n"
            "2 - Direita > Esquerda\n");
            scanf("%d", &posicao);
            if (posicao == 1 || posicao == 2){
                break;
            }
            else{
                printf("Opcao invalida, escolha novamente!");
            }
            }
            while(1){
            printf("Tamanho:");
            scanf("%d", &tamanho);
                if (tamanho >= 1 && tamanho <= 10){
                    break;
                }
            printf("Tamanho invalido! Lembre-se que o tabuleiro é 10x10!");
        }
    printf("Linha: ");
    scanf("%d", &i);
    printf("Coluna: ");
    scanf("%d", &j);
    i--;
    j--;
    if (posicao == 1){
    if (i < 0 || i > (10-tamanho) || j < 0 || j > (10 - tamanho)){
        printf("Posicao invalida, digite uma posicao dentro do tabuleiro!\n"); // verifica se a posicao esta dentro do tabuleiro
        continue;
    }
        int ocupado = 0;
        int conflito;
        for(int k = 0; k < tamanho; k++){ // percorre o caminho onde o navio será posicionado e verifica se todas as casas estao disponiveis
            if (Casas[i+k][j+k] !=0){
                ocupado = 1;
                conflito = k;
                break;
            }
        }
        if (ocupado){
            printf("As posicoes ([%d],[%d]) ja estao ocupadas.\n", i+conflito+1, j+conflito+1); // informa quais casas estao ocupadas
            continue;
        }
        printf("Posicoes definidas!\n");
        printf("Linha: %d\n", i+1);
        printf("Coluna: %d\n", j+1);
    for (int k = 0; k < tamanho; k++){
        Casas[i+k][j+k] = 3; // posiciona o navio na posicao definida
        }
        break;
    } else if (posicao == 2){
        if (i < 0 || i > (10-tamanho) || j < (tamanho - 1) || j > 9){
        printf("Posicao invalida, digite uma posicao dentro do tabuleiro!\n"); // verifica se a posicao esta dentro do tabuleiro
        continue;
        }
        int ocupado = 0;
        int conflito;
        for(int k = 0; k < tamanho; k++){ // percorre o caminho onde o navio será posicionado e verifica se todas as casas estao disponiveis
            if (Casas[i+k][j-k] !=0){
                ocupado = 1;
                conflito = k;
                break;
            }
        }
        if (ocupado){
            printf("As posicoes ([%d],[%d]) ja estao ocupadas.\n", (i+conflito+1), (j-conflito+1)); // informa quais casas estao ocupadas
            continue;
        }
        printf("Posicoes definidas!\n");
        printf("Linha: %d\n", i+1);
        printf("Coluna: %d\n", j+1);
    for (int k = 0; k < tamanho; k++){
        Casas[i+k][j-k] = 3; // posiciona o navio na posicao definida
        }
        break;
    }
}
    while(1){
            int posicao;
            while(1){
            printf("Digite as especificacoes do quarto navio, lembre-se que o quarto navio e sempre posicionado na DIAGONAL!: \n");
            printf("Primeiro diga para qual direcao esta apontada o navio:\n"
            "1 - Esquerda > Direita\n"
            "2 - Direita > Esquerda\n");
            scanf("%d", &posicao);
            if (posicao == 1 || posicao == 2){
                break;
            }
            else{
                printf("Opcao invalida, escolha novamente!");
            }
            }
            while(1){
            printf("Tamanho:");
            scanf("%d", &tamanho);
                if (tamanho >= 1 && tamanho <= 10){
                    break;
                }
            printf("Tamanho invalido! Lembre-se que o tabuleiro é 10x10!");
        }
    printf("Linha: ");
    scanf("%d", &i);
    printf("Coluna: ");
    scanf("%d", &j);
    i--;
    j--;
    if (posicao == 1){
    if (i < 0 || i > (10-tamanho) || j < 0 || j > (10 - tamanho)){
        printf("Posicao invalida, digite uma posicao dentro do tabuleiro!\n"); // verifica se a posicao esta dentro do tabuleiro
        continue;
    }
        int ocupado = 0;
        int conflito;
        for(int k = 0; k < tamanho; k++){ // percorre o caminho onde o navio será posicionado e verifica se todas as casas estao disponiveis
            if (Casas[i+k][j+k] !=0){
                ocupado = 1;
                conflito = k;
                break;
            }
        }
        if (ocupado){
            printf("As posicoes ([%d],[%d]) ja estao ocupadas.\n", i+conflito+1, j+conflito+1); // informa quais casas estao ocupadas
            continue;
        }
        printf("Posicoes definidas!\n");
        printf("Linha: %d\n", i+1);
        printf("Coluna: %d\n", j+1);
    for (int k = 0; k < tamanho; k++){
        Casas[i+k][j+k] = 4; // posiciona o navio na posicao definida
        }
        break;
    } else if (posicao == 2){
        if (i < 0 || i > (10-tamanho) || j < (tamanho - 1) || j > 9){
        printf("Posicao invalida, digite uma posicao dentro do tabuleiro!\n"); // verifica se a posicao esta dentro do tabuleiro
        continue;
        }
        int ocupado = 0;
        int conflito;
        for(int k = 0; k < tamanho; k++){ // percorre o caminho onde o navio será posicionado e verifica se todas as casas estao disponiveis
            if (Casas[i+k][j-k] !=0){
                ocupado = 1;
                conflito = k;
                break;
            }
        }
        if (ocupado){
            printf("As posicoes ([%d],[%d]) ja estao ocupadas.\n", (i+conflito+1), (j-conflito+1)); // informa quais casas estao ocupadas
            continue;
        }
        printf("Posicoes definidas!\n");
        printf("Linha: %d\n", i+1);
        printf("Coluna: %d\n", j+1);
    for (int k = 0; k < tamanho; k++){
        Casas[i+k][j-k] = 4; // posiciona o navio na posicao definida
        }
        break;
    }
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