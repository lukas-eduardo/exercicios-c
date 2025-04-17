// Faça um programa que peça uma nota de A a E e diga sua classificação:
// A -> Excelente
// B -> Ótimo
// C -> Bom
// D -> Regular
// E -> Ruim
// Outra letra -> Nota inválida

#include <stdio.h>

int main() {
    char nota;
    printf("Digite a nota (A-E): ");
    scanf(" %c", &nota);

    switch (nota) {
        case 'A':
        case 'a': printf("Excelente\n"); break;
        case 'B':
        case 'b': printf("Ótimo\n"); break;
        case 'C':
        case 'c': printf("Bom\n"); break;
        case 'D':
        case 'd': printf("Regular\n"); break;
        case 'E':
        case 'e': printf("Ruim\n"); break;
        default: printf("Nota inválida.\n");
    }

    return 0;
}
