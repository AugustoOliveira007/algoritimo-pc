#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_CTYPE, "");

    float comprimento;
    float largura;
    float perimetro;
    float area;
    printf("Qual o comprimento do jardim? ");
    scanf("%f", &comprimento);
    printf("Qual a largura do jardim? ");
    scanf("%f", &largura);
    area = comprimento*largura;
    perimetro = 2*(comprimento+largura);


    printf("\nPerímetro do jardim: %.2f m\n\n", perimetro);
    printf("Área do jardim: %.2f m²\n", area);

    return 0;
}
