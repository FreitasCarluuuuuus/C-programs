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
    printf("Digite a matricula do aluno: \n");
    scanf("%d", &matricula);

    printf("Nome: %s - Matricula: %d\n", nome, matricula);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);


    return 0;
}