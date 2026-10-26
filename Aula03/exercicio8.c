#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {

    setlocale(LC_CTYPE, "");

    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = ((nota1*1)+(nota2*2)+(nota3*4))/(1+2+4);
    printf("A média ponderada é: %.2f", media);

    return 0;
}
