#include <stdio.h>
#include <locale.h>

float calcular_media(float nota1, float nota2) {
    return (nota1 + nota2) / 2;
}

void analisar_situacao(float nota1, float nota2) {
    float media = calcular_media(nota1, nota2);
    if (media >= 7) {
        printf("Situação: aprovado!\n");
    } else if (media < 7) {
        printf("Situação: reprovado!\n");
    }
}

int main () {

    setlocale(LC_CTYPE, "");

    float nota1, nota2;
    char resp;

    while (1) {

        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        printf("Média do aluno: %.2f\n", calcular_media(nota1, nota2));
        analisar_situacao(nota1, nota2);

        printf("Deseja digitar notas de outro aluno? (s/n) ");
        scanf(" %c", &resp);
        if (resp == 'n' || resp == 'N')
            break;

    }
}
