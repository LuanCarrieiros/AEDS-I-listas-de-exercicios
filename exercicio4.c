// 4. Ler o raio de um círculo e mostrar o seu perímetro e área.

#include <stdio.h>
#include <math.h>
#define PI 3.14 // definindo pi

int main(void)
{ // abertura do main

    float raio, area, perimetro; // declarando as variaveis

    printf("Informe o raio do circulo\n"); // informando ao usuario o que o programa quer
    scanf("%f", &raio);                    // lendo do teclado o raio

    area = PI * pow(raio, 2);  // calculando a area
    perimetro = 2 * PI * raio; // calculando o raio
    // imprimindo na tela as saidas pra teste
    printf("A area eh: %.2f\n", area);           // exibindo a area
    printf("O perimetro eh: %.2f\n", perimetro); // exibindo o perimetro

    return 0;
}