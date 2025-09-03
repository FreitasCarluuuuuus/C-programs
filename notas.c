#include <stdio.h>

int main() {

float Nota1 = 0.0, Nota2 = 0.0, Nota3 = 0.0;
float Media = 0.0;

printf ("Digite a primeira nota: \n");
    scanf("%f", &Nota1);
printf("Digite a segunda nota: \n");
    scanf("%f", &Nota2);
printf("Digite a terceira nota: \n");
    scanf("%f", &Nota3);

Media = (Nota1 + Nota2 + Nota3) / 3;

printf("A media das notas e: %.3f\n", Media);

return 0;
}