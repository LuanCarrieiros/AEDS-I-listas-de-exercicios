// 5. Ler o lado de um quadrado e mostrar o seu perímetro, área e diagonal.

#include <stdio.h>
#include <math.h>

int main(void)
{ // abertura do main

    float lado, area, perimetro, diagonal; // declarando as variaveis

    printf("Informe o lado do quadrado\n"); // informando ao usuario o que o programa quer
    scanf("%f", &lado);                     // lendo do teclado o lado

    area = lado * lado;                         // calculando a area
    perimetro = lado * 4;                       // calculando o perimetro
    diagonal = sqrt(lado * lado + lado * lado); // calculando a diagonal

    // imprimindo na tela as saidas pra teste
    printf("A area eh: %.2f\n", area);           // exibindo a area
    printf("O perimetro eh: %.2f\n", perimetro); // exibindo o perimetro

    return 0;
}