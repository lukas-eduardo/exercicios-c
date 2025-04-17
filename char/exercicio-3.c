// Faça um programa que peça um caractere e imprime seu código ASCII

#include <stdio.h>

int main() {
    char caractere;

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    printf("O código ASCII de '%c' é %d\n", caractere, caractere);

    return 0;
}
