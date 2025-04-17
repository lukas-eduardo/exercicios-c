// Peça uma letra e diga se é vogal ou consoante.

#include <stdio.h>
#include <ctype.h>

int main() {
    char letra;
    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    // Transforma em minúsculo e facilita a comparação
    letra = tolower(letra);

    // Compara apenas com as vogais minúsculas, pois transformamos a variável `letra` em minúsculo
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        printf("É uma vogal.\n");
    } else {
        printf("É uma consoante.\n");
    }

    return 0;
}
