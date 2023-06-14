/* Ler o numerador e o denominador de uma fração e transformá-la em um número decimal. */

#include <stdio.h>
#include <math.h>

int main(void) // abertura do main
{

    float numerador, denominador, resultado;    // declarando as variaveis
    printf("Informe o valor do numerador\n");   // informando ao usuario o que o programa quer
    scanf("%f", &numerador);                    // lendo do teclado os dados
    printf("Informe o valor do denominador\n"); // informando ao usuario o que o programa quer
    scanf("%f", &denominador);                  // lendo do teclado os dados

    // transformando em decimal
    resultado = numerador / denominador;

    printf("O valor em decimal da fracao do numerador %.1f e denominador %.1f resulta em: %.1f\n", numerador, denominador, resultado); // exibindo ao usuario o resultado
    return 0;
}