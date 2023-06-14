/* Ler a razão e o primeiro termo de uma PG e mostrar o seu quinto termo. */

#include <stdio.h>
#include <math.h>

int main(void) // abertura do main
{

    float razao, primeiroTermo, quintoTermo;       // declarando as variaveis
    printf("Informe o valor da razao\n");          // informando ao usuario o que o programa quer
    scanf("%f", &razao);                           // lendo do teclado os dados
    printf("Informe o valor do primeiro termo\n"); // informando ao usuario o que o programa quer
    scanf("%f", &primeiroTermo);                   // lendo do teclado os dados
    quintoTermo = primeiroTermo * razao;           // calculando o decimo termo
    quintoTermo *= razao;                          // calculando o decimo termo
    quintoTermo *= razao;                          // calculando o decimo termo
    quintoTermo *= razao;                          // calculando o decimo termo
    quintoTermo *= razao;                          // calculando o decimo termo

    printf("o decimo termo equivale a: %.2f", quintoTermo); // exibindo ao usuario o decimo termo
    return 0;
}