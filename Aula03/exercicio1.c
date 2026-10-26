#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_CTYPE, "");
    int qt_manha, qt_tarde, qt_total;

    printf("Quantidade recebida pela manhã: ");
    scanf("%d", &qt_manha);
    printf("Quantidade recebida pela tarde: ");
    scanf("%d", &qt_tarde);

    qt_total = qt_manha + qt_tarde;
    printf("Total de produtos recebidos no dia: %d", qt_total);

    return 0;
}
