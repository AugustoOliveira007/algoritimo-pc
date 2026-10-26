#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_CTYPE, "");
    float peso, altura, imc;

    printf("Qual é o peso em kg? ");
    scanf("%f", &peso);
    printf("Qual é a altura em metros? ");
    scanf("%f", &altura);

    imc = peso / (altura*altura);
    printf("O índice da massa corporal é: %.2f kg/m²", imc);


    return 0;
}
