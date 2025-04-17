// Faça um programa que peça duas letras e informe qual vem primeiro no alfabeto.

#include <stdio.h>

int main() {
    char letra1, letra2;

    printf("Digite a primeira letra: ");
    scanf(" %c", &letra1);

    printf("Digite a segunda letra: ");
    scanf(" %c", &letra2);

    if (letra1 == letra2) {
        printf("As letras são iguais.\n");
    } else if (letra1 < letra2) {
        printf("%c vem antes de %c no alfabeto.\n", letra1, letra2);
    } else {
        printf("%c vem antes de %c no alfabeto.\n", letra2, letra1);
    }

    return 0;
}
