#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int escolhaJogador, escolhaComputador;
    srand(time(0)); // Inicializa o gerador de números aleatórios
    printf("Bem-vindo ao JokenPo!\n");
    printf("Escolha sua jogada:\n");
    printf("1 - Pedra\n");
    printf("2 - Papel\n");
    printf("3 - Tesoura\n");
    printf("Digite o número correspondente à sua escolha: ");
    scanf("%d", &escolhaJogador);

    escolhaComputador = rand() % 3 + 1; // Gera uma escolha aleatória para o computador

    switch (escolhaJogador) {
        case 1:
            printf("Você escolheu Pedra.\n");
            break;
        case 2:
            printf("Você escolheu Papel.\n");
            break;
        case 3:
            printf("Você escolheu Tesoura.\n");
            break;
        default:
            printf("Escolha inválida! Por favor, escolha 1, 2 ou 3.\n");
    }

    switch (escolhaComputador) {
        case 1:
            printf("O computador escolheu Pedra.\n");
            break;
        case 2:
            printf("O computador escolheu Papel.\n");
            break;
        case 3:
            printf("O computador escolheu Tesoura.\n");
            break;
    }

    // Determina o vencedor
    if (escolhaJogador == escolhaComputador) {
        printf("Empate!\n");
    } else if ((escolhaJogador == 1 && escolhaComputador == 3) ||
               (escolhaJogador == 2 && escolhaComputador == 1) ||
               (escolhaJogador == 3 && escolhaComputador == 2)) {
        printf("Você venceu!\n");
    } else {
        printf("Você perdeu!\n");
    }

    return 0;
}