#include <stdio.h>

int main() {

    // Declaração de variáveis
    char Estado1[50], Estado2[50]; // Nome do estado
    char CodigoCarta1[50], CodigoCarta2[50]; // Código da carta
    char NomeCidade1[50], NomeCidade2[50]; // Nome da cidade
    int Populacao1, Populacao2; // Número de habitantes da cidade
    float Area1, Area2; // Área da cidade
    float Pib1, Pib2; // PIB da cidade
    int N_Pontos_Turisticos1, N_Pontos_Turisticos2; // Número de pontos turísticos

    printf("Bem vindo ao Super Trunfo, hoje veremos quem saira vencedor, qual de voces tem a carta mais forte?\n" 
        "Para isso vamos comecar listando as informacoes de cada carta!\n");
        printf("Digite o nome do Estado: \n"); // Pede ao usuário o nome do estado
            scanf("%s", Estado1); // Salva o nome do estado
        printf("Digite o codigo da carta: \n"); // Pede ao usuário o código da carta
            scanf("%s", CodigoCarta1); // Salva o código da carta
        printf("Digite o nome da Cidade: \n"); // Pede ao usuário o nome da cidade
            scanf("%s", NomeCidade1); // Salva o nome da cidade
        printf("Digite o numero de habitantes da cidade: \n"); // Pede ao usuário o número de habitantes da cidade
            scanf("%d", &Populacao1); // Salva o número de habitantes da cidade
        printf("Digite a area da cidade: \n"); // Pede ao usuário a área da cidade
            scanf("%f", &Area1); // Salva a área da cidade
        printf("Digite o PIB da cidade: \n"); // Pede ao usuário o PIB da cidade
            scanf("%f", &Pib1); // Salva o PIB da cidade
        printf("Digite o numero de pontos turisticos: \n"); // Pede ao usuário o número de pontos turísticos
            scanf("%d", &N_Pontos_Turisticos1); // Salva o número de pontos turísticos

    printf("Pois bem, feito isso agora vamos colocar os dados da segunda carta!\n");
        printf("Digite o nome do Estado: \n");
            scanf("%s", Estado2); // Salva o nome do estado
        printf("Digite o codigo da carta: \n");
            scanf("%s", CodigoCarta2); // Salva o código da carta
        printf("Digite o nome da Cidade: \n");
            scanf("%s", NomeCidade2); // Salva o nome da cidade
        printf("Digite o numero de habitantes da cidade: \n");
            scanf("%d", &Populacao2); // Salva o número de habitantes da cidade
        printf("Digite a area da cidade: \n");
            scanf("%f", &Area2); // Salva a área da cidade
        printf("Digite o PIB da cidade: \n");
            scanf("%f", &Pib2); // Salva o PIB da cidade
        printf("Digite o numero de pontos turísticos: \n");
            scanf("%d", &N_Pontos_Turisticos2); // Salva o número de pontos turísticos
    printf("\n"); // Adiona um slato de linha para melhor legibilidade do resultado das cartas
    printf("Agora vamos comparar as cartas!\n");
    printf("\n");
        printf("Carta 1:\n"
        "Estado: %s\n"
        "Codigo da Carta: %s\n"
        "Nome da Cidade: %s\n"
        "Populacao: %d\n"
        "Area: %.2f km²\n"
        "PIB: %.2f Bilhoes de reais\n"
        "Numero de Pontos Turisticos: %d\n",
        Estado1, CodigoCarta1, NomeCidade1, Populacao1, Area1, Pib1, N_Pontos_Turisticos1); // aqui vamos printar o resultado da carta 1, colocando um salto de linha a cada caracteristica mencionada da carta
    printf("\n"); 
    printf("Carta 2:\n"
        "Estado: %s\n"
        "Codigo da Carta: %s\n"
        "Nome da Cidade: %s\n"
        "Populacao: %d\n"
        "Area: %.2f km²\n"
        "PIB: %.2f Bilhoes de reais\n"
        "Numero de Pontos Turisticos: %d\n",
        Estado2, CodigoCarta2, NomeCidade2, Populacao2, Area2, Pib2, N_Pontos_Turisticos2); // faremos o mesmo com a carta 2, veja que os parâmetros diferem apenas no número 2, referindo-se a segunda carta
    return 0;
}
