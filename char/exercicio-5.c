// Faça um programa que peça uma letra e diga se ela é maiúscula ou minúscula.

#include <stdio.h>

int main() {
    char letra;

    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    if (letra >= 'A' && letra <= 'Z') {
        printf("A letra %c é maiúscula.\n", letra);
    } else if (letra >= 'a' && letra <= 'z') {
        printf("A letra %c é minúscula.\n", letra);
    } else {
        printf("Isso não é uma letra do alfabeto.\n");
    }

    return 0;
}
