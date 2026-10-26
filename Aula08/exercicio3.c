#include<stdio.h>
#include<locale.h>

int main () {

    setlocale(LC_CTYPE, "");

    int num = 1, soma=0;

    while (num!=0) {
        printf("Vai digitando: ");
        scanf("%d", &num);

        if (num != 0 && num % 2 != 0) {
            soma += num;
        }
    }

    printf("Soma dos números ímpares: %.2d", soma);

    return 0;
}
