#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_CTYPE, "");

    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if(num % 2 == 0 && num % 5 == 0) {
        printf("\nO número %d é multiplo de 2 e 5", num);
    } else {
        printf("\nO número %d é ímpar", num);
    }

    return 0;
}
