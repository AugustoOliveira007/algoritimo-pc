#include <stdio.h>
#include <locale.h>

float calcularArea(float largura, float comprimento) {
    return largura*comprimento;
}

int main () {

    setlocale(LC_CTYPE, "");

    float largura, comprimento;
    char resp;

    while (1) {

        printf("Digite a largura(m): ");
        scanf("%f", &largura);
        printf("Digite o comprimento(m): ");
        scanf("%f", &comprimento);

        printf("\n¡rea: %.2fm≤\n", calcularArea(largura, comprimento));

        printf("Deseja digitar notas de outro aluno? (s/n) \n");
        scanf(" %c", &resp);
        if (resp == 'n' || resp == 'N')
            break;
    }
}
