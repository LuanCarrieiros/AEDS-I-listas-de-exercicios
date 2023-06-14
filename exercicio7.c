/* Faça um programa que receba uma temperatura em Celsius, calcule e mostre essa
temperatura em Fahrenheit. Sabe-se que F = 180*(C + 32)/100 */

#include <stdio.h>
#include <math.h>

int main(void)
{ // abertura do main

    float celsius, fahrenheit; // declarando as variaveis

    printf("Informe o valor de celsius\n"); // informando ao usuario o que o programa quer
    scanf("%f", &celsius);                  // lendo do teclado os dados

    fahrenheit = celsius * 1.8 + 32; // convertendo para fahrenheit

    printf("O valor %.2f em celsius corresponde a: %.2f em fahrenheit", celsius, fahrenheit); // exibindo o valor em fahrenheit

    return 0;
}