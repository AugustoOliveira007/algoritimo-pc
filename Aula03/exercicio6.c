#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {

    setlocale(LC_CTYPE, "");

    float largura, comprimento, valor_caixa, area, qt_caixas, valor_total;

    printf("Qual È a largura da ·rea em metros? ");
    scanf("%f", &largura);
    printf("Qual È o comprimento da ·rea em metros? ");
    scanf("%f", &comprimento);
    printf("Qual È o valor de cada caixa? ");
    scanf("%f", &valor_caixa);

    area = comprimento * largura;
    qt_caixas = area / 2.5;
    valor_total = ceil(qt_caixas) * valor_caixa;

    printf("\n¡rea total a ser revestida: %.2f m≤", area);
    printf("\nQuantidade de caixas necess·rias: %.2f", ceil(qt_caixas));
    printf("\nCusto toal da compra: R$ %.2f", valor_total);


    return 0;

}
