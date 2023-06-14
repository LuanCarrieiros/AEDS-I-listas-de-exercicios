/* Ler dois números reais e salvá-los nas variáveis A e B. Em seguida, troque dos valores
das duas variáveis de forma que a variável A passe a ter o valor da variável B e
vice-versa. No final, mostre os valores finais. */

#include <stdio.h>
#include <math.h>

int main(void) // abertura do main
{

    float a, b, aux;                  // declarando as variaveis
    printf("Informe o valor de A\n"); // informando ao usuario o que o programa quer
    scanf("%f", &a);                  // lendo do teclado os dados
    printf("Informe o valor de B\n"); // informando ao usuario o que o programa quer
    scanf("%f", &b);                  // lendo do teclado os dados

    // fazendo a troca de valores
    aux = a;
    a = b;
    b = aux;

    printf("O novo valor de 'A' equivale a: %.1f\n", a); // exibindo ao usuario o resultado
    printf("O novo valor de 'B' equivale a: %.1f", b);   // exibindo ao usuario o resultado
    return 0;
}
