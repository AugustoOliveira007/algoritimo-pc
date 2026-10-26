#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "");

    float nota1, nota2, media;

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    media = (nota1+nota2)/2;

    if(media >= 6) {
        printf("Parabéns! Você foi aprovado com a média %.2f", media);
    } else {
        printf("Você foi reprovado!");
    }

    return 0;
}
