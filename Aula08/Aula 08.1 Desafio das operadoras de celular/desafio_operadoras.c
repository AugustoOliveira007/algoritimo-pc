#include <stdio.h>
#include <math.h>
#define LIN 3
#define COL 12

int main () {

    const int vendas[LIN][COL] = {
        {120, 135, 150, 140, 160, 175, 180, 170, 165, 190, 200, 210}, //vivo
        {110, 125, 145, 150, 155, 160, 170, 180, 175, 185, 195, 205}, //claro
        {100, 115, 130, 125, 140, 150, 160, 155, 170, 175, 185, 190} //tim
    };

    const char *operadoras[] = {"Vivo", "Claro", "Tim"};
    const char *meses[] = {"jan", "fev", "mar", "abr", "mai", "jun", "jul", "ago", "set", "out", "nov", "dez"};

    int medias[3];

    int i, j, soma_operadora, soma_geral = 0, soma_mes, valor_maior_mes = 0, maior_venda_anual = 0;
    const char *maior_mes = meses[0], *maior_operadora = operadoras[0];
    
    for (i = 0; i < LIN; i++) {
        soma_operadora = 0;
        for (j = 0; j < COL; j++) {
            soma_operadora += vendas[i][j];
            }
        medias[i] = ceil((float) soma_operadora/COL);
        soma_geral += soma_operadora;
        if (maior_venda_anual < soma_operadora) {
            maior_venda_anual = soma_operadora;
            maior_operadora = operadoras[i];
        }
    }
    for (j = 0; j < COL; j++) {
        soma_mes = 0;
        for (i = 0; i < LIN; i++) {
            soma_mes += vendas[i][j];
        }
        if (valor_maior_mes < soma_mes) {
                maior_mes = meses[j];
                valor_maior_mes = soma_mes;
        }
    }

    printf("\nRELATÓRIO ANUAL GERAL\n");
    printf("\nMédia mensal geral: %.0f\n", ceil((double) soma_geral/(LIN*COL)));
    printf("\nMédia da Vivo: %d", medias[0]);
    printf("\nMédia da Claro: %d", medias[1]);
    printf("\nMédia da Tim: %d\n", medias[2]);
    printf("\nMês com maior média de vendas: %s - %d chips\n", maior_mes, valor_maior_mes);
    printf("Operadora com maior venda anual: %s - total de %d chips\n", maior_operadora, maior_venda_anual);
}