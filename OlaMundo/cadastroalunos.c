#include <stdio.h>

int main (){
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite o nome do aluno: \n");
    scanf("%s", nome);
    printf("Digite a idade do aluno: \n");
    scanf("%d", &idade);
    printf("Digite a altura do aluno: \n");
    scanf("%f", &altura);

    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);


    return 0;
}