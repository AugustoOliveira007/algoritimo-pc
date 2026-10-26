#include <stdio.h>
#include<locale.h>

int main() {

    setlocale(LC_CTYPE, "");

    float raio,valor_perimetro;
    printf("Qual o valor do raio (em cm)? ");
    scanf("%f", &raio);
    valor_perimetro = 2*3.14*raio;
    printf("O valor da circunferência é: %.2f", valor_perimetro);
    return 0;
}
