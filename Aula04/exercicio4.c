#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_CTYPE, "");

    float kg, altura, imc;

    printf("Qual o peso(em kg)? ");
    scanf("%f", &kg);
    printf("Qual a altura(em metros)? ");
    scanf("%f", &altura);

    imc = kg/pow(altura,2);

    if(imc<20) {
        printf("Você está na categoria abaixo do peso");
    } else if (imc >= 20 && imc < 25){
        printf("Você está na categoria peso normal");
    } else if (imc >= 25 && imc < 30) {
        printf("Você está na categoria sobrepeso");
    } else if (imc >= 30 && imc < 40) {
        printf("Você está na categoria obeso");
    } else {
        printf("Você está na categoria mórbido");
    }

    return 0;
}
