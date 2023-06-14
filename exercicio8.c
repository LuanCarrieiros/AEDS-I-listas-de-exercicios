/* Ler a razão e o primeiro termo de uma PA e mostrar o seu décimo termo */

#include <stdio.h>
#include <math.h>

int main(void)
{ // abertura do main

    float razao, primeiroTermo, decimoTermo; // declarando as variaveis

    printf("Informe o valor da razao\n"); // informando ao usuario o que o programa quer
    scanf("%f", &razao);                  // lendo do teclado os dados

    printf("Informe o valor do primeiro termo\n"); // informando ao usuario o que o programa quer
    scanf("%f", &primeiroTermo);                   // lendo do teclado os dados

    decimoTermo = primeiroTermo + razao * 9; // calculando o decimo termo

    printf("o decimo termo equivale a: %.2f", decimoTermo); // exibindo ao usuario o decimo termo

    return 0;
}