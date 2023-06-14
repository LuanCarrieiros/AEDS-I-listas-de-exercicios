/* Ler do teclado um número inteiro com três dígitos (no formato CDU - centena, dezena e
unidade) e mostrar o número invertido (no formato UDC). O número invertido deve ser
armazenado em outra variável antes de ser mostrado */

#include <stdio.h> // Importei a biblioteca de entradas e saídas

int main(void) // abri o main
{
    int unidade, dezena, centena, numero, numeroInvertido, numeroAuxiliar; // declarei as variáveis

    printf("Digite um numero de 3 digitos: "); // exibir na tela informando ao usuario o que o programa espera
    scanf("%d", &numero);                      // leitura do teclado
    getchar();
    centena = numero / 100;                                        // armazenando na variavel o valor inteiro do número pela divisao com 100
    numeroAuxiliar = numero - (centena * 100);                     // armazentando no numero auxiliar o numero menos a unidade de centena * 100
    dezena = numeroAuxiliar / 10;                                  // armazentando em dezena o numero auxiliar dividido por 10
    unidade = numero - ((centena * 100) + (dezena * 10));          // guardando em unidade o inteiro da centena que foi dividido por 100, agora * 100 + a dezena * 10;
    numeroInvertido = (unidade * 100) + (dezena * 10) + (centena); // declarando que o numero invertido é a unidade * 100, somando a unidade de dezena * 10, + a unidade de centena que foi dividido por 100 lá no inicio
    printf("%i", numeroInvertido);                                 // imprimindo ao usuário o número invertido

    return (0);
}

/*
Obs: Não consigo ver o resultado no prompt de comando,
apenas quando executo o programa dentro do próprio terminal do VS CODE.
Quando abro pelo executável do programa, eu consigo ver o comando,
porém assim que eu insiro os números ele fecha antes de eu ver o resultado;

*/