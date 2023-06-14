// 3. Ler a base e a altura de um retângulo e mostrar o seu perímetro, área e diagonal.

#include <stdio.h>
#include <math.h>

int main(void)
{ // abertura do main

    float base, altura, area, perimetro, diagonal; // declarando as variaveis
    printf("Informe a base do retangulo\n");       // informando ao usuario o que o programa quer
    scanf("%f", &base);                            // lendo do teclado a base
    printf("Informe a altura do retangulo\n");     // informando ao usuario o que o programa quer
    scanf("%f", &altura);                          // lendo do teclado a altura

    area = base * altura;                           // calculando a area
    perimetro = 2 * (base + altura);                // calculando o perimetro
    diagonal = sqrt(base * base + altura * altura); // calculando a diagonal

    // imprimindo na tela as saidas pra teste
    printf("A area eh: %.2f\n", area);
    printf("O perimetro eh: %.2f\n", perimetro);
    printf("A diagonal eh: %.2f\n", diagonal);

    return 0;
}