// Mini calculadora: Faça um programa que solicite dois números e um operador, então diga o resultado do cálculo.

#include <stdio.h>

int main() {
    float num1, num2;
    char op;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    printf("Digite a operação (+, -, *, /): ");
    scanf(" %c", &op);

    switch (op) {
        case '+': printf("Resultado: %.2f\n", num1 + num2); break;
        case '-': printf("Resultado: %.2f\n", num1 - num2); break;
        case '*': printf("Resultado: %.2f\n", num1 * num2); break;
        case '/':
            if (num2 != 0)
                printf("Resultado: %.2f\n", num1 / num2);
            else
                printf("Erro: divisão por zero!\n");
            break;
        default:
            printf("Operação inválida.\n");
    }

    return 0;
}
