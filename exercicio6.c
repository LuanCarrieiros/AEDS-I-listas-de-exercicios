// 6. Ler três números reais a, b e c e mostrar o valor de y, sendo y = a + b * c+a + 2 * (a − b) + log2(64).

#include <stdio.h>
#include <math.h>

int main(void)
{ // abertura do main

    float a, b, c, y; // declarando as variaveis

    printf("Informe o valor de A\n"); // informando ao usuario o que o programa quer
    scanf("%f", &a);                  // lendo do teclado os dados

    printf("Informe o valor de B\n"); // informando ao usuario o que o programa quer
    scanf("%f", &b);

    printf("Informe o valor de C\n"); // informando ao usuario o que o programa quer
    scanf("%f", &c);

    y = a + b * c + a + 2 * (a - b) + log(64); // fazendo o calculo

    printf("O valor de y e: %.2f ", y); // exibindo o valor

    return 0;
}