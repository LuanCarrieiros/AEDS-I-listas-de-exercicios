/* Ler um valor de hora (e minuto), calcular e mostrar quantos minutos se passaram desde o
início do dia. */

#include <stdio.h>
#include <math.h>

int main(void) // abertura do main
{

    int hora, minuto, resultado;    // declarando as variaveis
    printf("Informe o valor do hora\n");   // informando ao usuario o que o programa quer
    scanf("%d", &hora);                    // lendo do teclado os dados
    printf("Informe o valor do minuto\n"); // informando ao usuario o que o programa quer
    scanf("%d", &minuto);                  // lendo do teclado os dados

    // transformando o valor de horas em minutos e somando em minutos
    hora = hora * 60;
    resultado = minuto + hora;

    printf("Ja se passaram: %d minutos desde o inicio do dia", resultado); // exibindo ao usuario o resultado
    return 0;
}