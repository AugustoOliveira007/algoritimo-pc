#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_CTYPE, "");

    float potencia, horas, consumo;

    printf("Potência do equipamento (W): ");
    scanf("%f", &potencia);
    printf("Quantidade de horas: ");
    scanf("%f", &horas);

    consumo = (potencia*horas*30)/1000;
    printf("Consumo mensal: %.2f kWh", consumo);
    return 0;
}
