// Simulador de CAPS LOCK: Faça um programa que solicite uma letra e inverta seu caso:
// - Se for maiúscula, transforma em minúscula.
// - Se for minúscula, transforma em maiúscula.

#include <stdio.h>
#include <ctype.h>

int main() {
    char letra;
    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    if (isalpha(letra)) {
        if (isupper(letra)) {
            printf("Invertido: %c\n", tolower(letra));
        } else {
            printf("Invertido: %c\n", toupper(letra));
        }
    } else {
        printf("Isso não é uma letra.\n");
    }

    return 0;
}
