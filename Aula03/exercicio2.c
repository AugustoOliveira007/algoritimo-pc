#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_CTYPE, "");

    int horas, minutos, minutos_total;
    printf("Quantidade de horas: ");
    scanf("%d", &horas);
    printf("Quantidade de minutos: ");
    scanf("%d", &minutos);

    minutos_total = (horas * 60) + minutos;
    printf("Já se passaram %d minutos", minutos_total);


    return 0;
}
