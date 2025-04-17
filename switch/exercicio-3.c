// Faça um programa que solicite uma letra e diga se é uma vogal ou consoante.

#include <stdio.h>

int main() {
    char letra;
    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    switch (letra) {
        case 'a': case 'A':
        case 'e': case 'E':
        case 'i': case 'I':
        case 'o': case 'O':
        case 'u': case 'U':
            printf("É uma vogal.\n");
            break;
        default:
            printf("É uma consoante.\n");
    }

    return 0;
}
