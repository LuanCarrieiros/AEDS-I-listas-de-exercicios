/* Ler o valor do salário mínimo e o valor do salário de uma pessoa, calcular e mostrar
quantos salários mínimos essa pessoa ganha. */

#include <stdio.h>
#include <math.h>

int main(void) // abertura do main
{

    float salarioMinimo, salarioAtual, resultado;    // declarando as variaveis
    printf("Informe o valor do salario Minimo\n");   // informando ao usuario o que o programa quer
    scanf("%f", &salarioMinimo);                    // lendo do teclado os dados
    printf("Informe o valor do salario Atual\n"); // informando ao usuario o que o programa quer
    scanf("%f", &salarioAtual);                  // lendo do teclado os dados

    // dividindo o valor do salario que a pessoa recebe pelo valor do salario minimo
    resultado = salarioAtual / salarioMinimo;

    printf("O usuario recebe: %.1f salarios minimos", resultado); // exibindo ao usuario o resultado
    return 0;
}