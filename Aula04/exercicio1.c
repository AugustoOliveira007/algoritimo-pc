#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_CTYPE, "");

    float a, b, c, x1, x2, delta;

    printf("Qual o valor de a?");
    scanf("%f", &a);
    printf("Qual o valor de b?");
    scanf("%f", &b);
    printf("Qual o valor de c?");
    scanf("%f", &c);

    delta = pow(b,2) - 4*a*c;


    if(delta >= 0) {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);

        printf("\nRaízes da equação:");
        printf("\nx1 = %.2f", x1);
        printf("\nx2 = %.2f", x2);
    } else {
        printf("Não existem raízes reais!!!");
    }

    return 0;
}
