#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_CTYPE, "");

    int num1, num2, soma, subtracao, multiplicacao;

    printf("Número 1: ");
    scanf("%d", &num1);
    printf("Número 2: ");
    scanf("%d", &num2);

    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;

    printf("\nSoma: %d", soma);
    printf("\nSubtração: %d", subtracao);
    printf("\nMultiplicação: %d", multiplicacao);

    return 0;
}
