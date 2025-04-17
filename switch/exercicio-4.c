// Peça uma letra de unidade de medida e converta um valor com base nela:
// C -> Celsius para Fahrenheit
// F -> Fahrenheit para Celsius
// K -> Kelvin para Celsius
// Letra inválida -> Mostrar erro

#include <stdio.h>

int main() {
    float valor, convertido;
    char unidade;

    printf("Digite a unidade de origem (C, F ou K): ");
    scanf(" %c", &unidade);

    printf("Digite o valor: ");
    scanf("%f", &valor);

    switch (unidade) {
        case 'C':
        case 'c':
            convertido = (valor * 9/5) + 32;
            printf("Celsius para Fahrenheit: %.2f°F\n", convertido);
            break;
        case 'F':
        case 'f':
            convertido = (valor - 32) * 5/9;
            printf("Fahrenheit para Celsius: %.2f°C\n", convertido);
            break;
        case 'K':
        case 'k':
            convertido = valor - 273.15;
            printf("Kelvin para Celsius: %.2f°C\n", convertido);
            break;
        default:
            printf("Unidade inválida.\n");
    }

    return 0;
}
