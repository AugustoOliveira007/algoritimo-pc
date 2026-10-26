#include<stdio.h>
#include<locale.h>

int main () {

    setlocale(LC_CTYPE, "");

    int i;
    float nota, maior_nota, total, media;

    for (i=1 ; i<=5 ; i++) {
        printf("Defina a nota do %dº aluno: ", i);
        scanf("%f", &nota);
        total += nota;

        if(nota > maior_nota) {
            maior_nota = nota;
        }
    }

    media = total / 5;

    printf("\nA média da sala é %.2f\n", media);
    printf("\nA maior nota da sala é %.2f\n", maior_nota);

    return 0;
}
