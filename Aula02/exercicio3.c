#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_CTYPE, "");

    int semanas;
    float tempo;

    printf("Quantas semanas de gestão? ");
    scanf("%d", &semanas);
    tempo = (float) (semanas*7)/30;
    printf("Tempo de gestão aproximado: %.2f", tempo);

    return 0;

}
