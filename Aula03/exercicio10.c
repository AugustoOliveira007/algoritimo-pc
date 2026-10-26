#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {

    setlocale(LC_CTYPE, "");

    float velo_inicial, angulo, alcance, angulo_radianos;

    printf("Qual a velocidade inicial(m/s): ");
    scanf("%f", &velo_inicial);
    printf("Qual o angulo do lançamento em graus: ");
    scanf("%f", &angulo);

    angulo_radianos = (angulo*3.14)/180;

    alcance = (pow(velo_inicial, 2) * sin(2 * angulo_radianos)) / 9.8;

    printf("O alcance horizontal estimado é: %.2f metros", alcance);

    return 0;
}
