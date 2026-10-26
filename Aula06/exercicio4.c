#include<stdio.h>
#include<locale.h>

int main () {

    setlocale(LC_CTYPE, "");
    float nota, soma=0, media;
    int i;

    for(i=0; i<3; i++){
        do {
            printf("\nDigite a nota do %dº aluno (0-10): ", (i+1));
            scanf("%f", &nota);
            if (nota<0 || nota>=10) {
                printf("\nNota inválida!! Tente outra vez!!");
            } else {
                soma += nota;
            }
        } while (nota<0 || nota>=10);
    }

    media = soma/3;
    printf("\nA média do aluno é: %.2f", media);

    return 0;
}
