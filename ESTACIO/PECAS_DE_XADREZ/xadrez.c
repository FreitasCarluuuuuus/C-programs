#include <stdio.h>

void moverTorre(int casas) {
    for (int i = 1; i <= casas; i++) { // Inicia a variável de controle i em 1 e incrementa até que seja menor que casas
        printf("\n");
        printf("%d\n", i); // Imprime as casas que foram movidas
    }
}
void moverBispo(int casas) {
    int i = 1;
    while (i <= casas && casas <= 7) // Condição para o loop while
    {
        printf("\n");
        printf("%d\n", i); // Imprime a direção a cada iteração
        i++;
    }
}
void moverRainha(int casas){
    int i = 1;
    do {
        printf("\n");
        printf("%d\n", i); // Imprime a direção a cada iteração
        i++;
        } 
    while (i <= casas && casas <= 7); // Condição para o loop do-while
}
void moverCavalo(int movimento){
    switch (movimento)
{
    case 1:
        int movimentocompleto = 1; // Variável de controle para o loop while
            while (movimentocompleto --) { // Loop para simular o movimento do cavalo
                for (int i = 0; i < 2; i++)
                {
                    printf("Cima\n");
                }
                printf("Direita\n");
            }
    break;
    case 2:
        int movimentocompleto2 = 1; // Variável de controle para o loop while
            while (movimentocompleto2 --) { // Loop para simular o movimento do cavalo
                for (int i = 0; i < 2; i++)
                {
                    printf("Cima\n");
                }
                printf("Esquerda\n");
            }
    break;
    case 3:
        int movimentocompleto3 = 1; // Variável de controle para o loop while
            while (movimentocompleto3 --) { // Loop para simular o movimento do cavalo
                for (int i = 0; i < 2; i++)
                {
                    printf("Baixo\n");
                }
                printf("Direita\n");
            }
    break;
    case 4:
        int movimentocompleto4 = 1; // Variável de controle para o loop while
            while (movimentocompleto4 --) { // Loop para simular o movimento do cavalo
                for (int i = 0; i < 2; i++)
                {
                    printf("Baixo\n");
                }
                printf("Esquerda\n");
            }
    break;
    case 5:
        int movimentocompleto5 = 1; // Variável de controle para o loop while
            while (movimentocompleto5 --) { // Loop para simular o movimento do cavalo
                for (int i = 0; i < 2; i++)
                {
                    printf("Direita\n");
                }
                printf("Cima\n");
            }
    break;
    case 6:
        int movimentocompleto6 = 1; // Variável de controle para o loop while
            while (movimentocompleto6 --) { // Loop para simular o movimento do cavalo
                for (int i = 0; i < 2; i++)
                {
                    printf("Direita\n");
                }
                printf("Baixo\n");
            }
    break;
    case 7:
        int movimentocompleto7 = 1; // Variável de controle para o loop while
            while (movimentocompleto7 --) { // Loop para simular o movimento do cavalo
                for (int i = 0; i < 2; i++)
                {
                    printf("Esquerda\n");
                }
                printf("Cima\n");
            }
    break;
    case 8:
        int movimentocompleto8 = 1; // Variável de controle para o loop while
            while (movimentocompleto8 --) { // Loop para simular o movimento do cavalo
                for (int i = 0; i < 2; i++)
                {
                    printf("Esquerda\n");
                }
                printf("Baixo\n");
            }
    break;
    }
}
int main(){
    // Movimento das peças de xadrez utilizando estruturas de repetição
    int peca;
    int casas;
    char direcao[30];
    // Solicita ao usuário que escolha uma peça de xadrez
    printf("Digite o número correspondente a peça de xadrez que deseja movimentar:\n");
    printf("1 - Torre\n");
    printf("2 - Bispo\n");
    printf("3 - Rainha\n");
    printf("4 - Cavalo\n");
    scanf("%d", &peca);
    // Estrutura switch para determinar a peça selecionada
    switch (peca)
    {
        case 1:
            printf("Você selecionou a Torre.\n");
            printf("A Torre pode se mover em linha reta, tanto na horizontal quanto na vertical.\n");
            printf("Digite o número de casas que deseja mover a torre (1-7):\n");
            scanf("%d", &casas);
            printf("Digite a direcao\n 1 - cima\n 2 - baixo\n 3 - esquerda\n 4 - direita):\n");
            scanf("%s", direcao);
                    moverTorre(casas); // Chama a função moverTorre que informa o movimento feito pela torre apos ação do usuário
                    printf("A torre moveu %d casas para %s.\n", casas, direcao); // Imprime a mensagem final após o loop
            break;
        case 2:
            printf("Você selecionou o Bispo.\n");
            printf("O Bispo pode se mover livremente em qualquer diagonal.\n");
            printf("Digite o número de casas que deseja mover o bispo (1-7):\n");
            scanf("%d", &casas);
            printf("Digite a direcao\n 1 - cima esquerda\n 2 - cima direita\n 3 - baixo esquerda\n 4 - baixo direita):\n");
            scanf(" %29[^\n]", direcao);
                moverBispo(casas); // Chama a função moverBispo que informa o movimento feito pelo bispo após ação do usuario
                    printf("O bispo moveu %d casas para %s.\n", casas, direcao);
            break;
        case 3:
            printf("Você selecionou a Rainha.\n");
            printf("A Rainha pode se mover em linha reta (horizontal e vertical) e em diagonal livremente.\n");
            printf("Digite a direcao que deseja mover a Rainha:\n 1- Cima\n 2- Baixo\n 3- Esquerda\n 4- Direita\n 5- Cima Esquerda\n 6- Cima Direita\n 7- Baixo Esquerda\n 8- Baixo Direita):\n");
            scanf(" %29[^\n]", direcao);
            printf("Digite o número de casas que deseja mover a Rainha (1-7):\n");
            scanf("%d", &casas);
            moverRainha(casas);
            printf("A rainha moveu %d casas para %s.\n", casas, direcao);
            break;
        case 4:
            int movimento;
            printf("Você selecionou o Cavalo.\n");
            printf("O Cavalo se move em 'L', ou seja, duas casas em uma direção e depois uma casa perpendicularmente.\n");
            printf("Digite a direção que deseja mover o Cavalo:\n 1- Cima Cima Direita\n 2- Cima Cima Esquerda\n 3- Baixo Baixo Direita\n 4- Baixo Baixo Esquerda\n 5- Direita Direita Cima\n 6- Direita Direita Baixo\n 7- Esquerda Esquerda Cima\n 8- Esquerda Esquerda Baixo):\n");
            scanf("%d", &movimento);
            moverCavalo(movimento);
            break;
    }
}