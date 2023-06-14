/* Sabendo que 100 kilowatt de energia custa um sétimo do salário mínimo, faça um
algoritmo que leia o valor do salário mínimo e a quantidade de kilowatt gasta por uma
residência, calcule e mostre: o valor em reais de cada kilowatt; o valor em reais a ser
pago; e o novo valor a ser pago por essa residência com um desconto de 10%*/

#include <stdio.h>
#include <math.h>

int main(void) // abertura  do main
{
    double kilowatt, salarioMinimo, valorUnitarioKilowatt, kilowattGasta, kilowattDesconto, kilowattApagar; // declaracao das variaveis
    printf("Insira o valor do salario minimo: ");                                                           // imprimindo na tela do usuário a informacao que o usuario precisa inserir
    scanf("%lf", &salarioMinimo);                                                                           // lendo do teclado a resposta
    printf("Informe a quantidade de kilowatt gasta: ");                                                     // imprimindo na tela do usuário a informacao que o usuario precisa inserir
    scanf("%lf", &kilowattGasta);                                                                           // lendo do teclado a resposta

    kilowatt = salarioMinimo / 7;                                                                     // fazendo o calculo
    printf("100 kilowatts de energia custam 1/7 do salario minimo, custando entao: %.2lf", kilowatt); // imprimindo na tela do usuário a resposta
    valorUnitarioKilowatt = kilowatt / 100;                                                           // fazendo o calculo
    printf("\nO valor de cada kilowatt em reais e: %.2lf", valorUnitarioKilowatt);                    // imprimindo na tela do usuário a resposta
    kilowattApagar = (kilowattGasta * valorUnitarioKilowatt);                                         // fazendo o calculo
    printf("\nO valor a ser pago e: %.2lf", kilowattApagar);                                          // imprimindo na tela do usuário a resposta
    kilowattDesconto = (kilowattApagar * 0.9);                                                        // fazendo o calculo
    printf("\nO valor com desconto e: %.2lf", kilowattDesconto);                                      // imprimindo na tela do usuário a resposta

    return 0;
}