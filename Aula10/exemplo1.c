#include <stdio.h>
#include <locale.h>

float calcular_area(float base, float altura) {
    return base*altura;
}

int main() {

    setlocale(LC_CTYPE, "");

    printf("A área do retângulo é: %.1f cm²\n", calcular_area(5, 7.8));
    printf("A área do retângulo é: %.1f cm²\n", calcular_area(3, 8));
    printf("A área do retângulo é: %.1f cm²\n", calcular_area(5, 9));

    return 0;
}

