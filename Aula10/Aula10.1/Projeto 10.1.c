#include <stdio.h>

#define LABS 4
#define DIAS 7

const char *dias[] = {"seg", "ter", "qua", "qui", "sex", "sab", "dom"};
const char *laboratorios[] = {"Lab A", "Lab B", "Lab C", "Lab D"};

float calcular_total_laboratorio(float consumo[][DIAS], int lab) {
    float soma = 0;
    for (int d = 0; d < DIAS; d++) soma += consumo[lab][d];
    return soma;
}

float calcular_total(float consumo[][DIAS], int laboratorios) {
    float total = 0;
    for (int l = 0; l < laboratorios; l++)
        total += calcular_total_laboratorio(consumo, l);
    return total;
}

float calcular_media_laboratorio(float consumo[][DIAS], int lab) {
    return calcular_total_laboratorio(consumo, lab) / DIAS;
}

float calcular_total_dia(float consumo[][DIAS], int laboratorios, int dia) {
    float soma = 0;
    for (int l = 0; l < laboratorios; l++) soma += consumo[l][dia];
    return soma;
}

int buscar_dia_maior_consumo(float consumo[][DIAS], int laboratorios) {
    int melhor = 0;
    float maior = calcular_total_dia(consumo, laboratorios, 0);
    for (int d = 1; d < DIAS; d++) {
        float t = calcular_total_dia(consumo, laboratorios, d);
        if (t > maior) { maior = t; melhor = d; }
    }
    return melhor;
}

int buscar_laboratorio_maior_consumo(float consumo[][DIAS], int laboratorios) {
    int melhor = 0;
    float maior = calcular_total_laboratorio(consumo, 0);
    for (int l = 1; l < laboratorios; l++) {
        float t = calcular_total_laboratorio(consumo, l);
        if (t > maior) { maior = t; melhor = l; }
    }
    return melhor;
}

int contar_acima_limite(float consumo[][DIAS], int laboratorios, float limite) {
    int cont = 0;
    for (int l = 0; l < laboratorios; l++)
        for (int d = 0; d < DIAS; d++)
            if (consumo[l][d] > limite) cont++;
    return cont;
}

int main(void) {
    float consumo[LABS][DIAS] = {
        { 80,  90,  95, 110, 120, 100,  85},
        { 75,  85,  90, 105, 115,  95,  80},
        {100, 110, 120, 130, 125, 115, 105},
        { 70,  80,  85,  90, 100,  95,  75}
    };

    printf("===== RELATORIO DE CONSUMO =====\n\n");
    printf("Consumo total geral: %.2f kWh\n\n", calcular_total(consumo, LABS));

    for (int l = 0; l < LABS; l++)
        printf("Media do %s: %.2f kWh\n", laboratorios[l],
               calcular_media_laboratorio(consumo, l));

    int dia = buscar_dia_maior_consumo(consumo, LABS);
    printf("\nDia com maior consumo total:\n%s - %.2f kWh\n",
           dias[dia], calcular_total_dia(consumo, LABS, dia));

    int lab = buscar_laboratorio_maior_consumo(consumo, LABS);
    printf("\nLaboratorio com maior consumo semanal:\n%s - %.2f kWh\n",
           laboratorios[lab], calcular_total_laboratorio(consumo, lab));

    printf("\nRegistros acima de 100 kWh: %d\n",
           contar_acima_limite(consumo, LABS, 100.0f));

    return 0;
}
