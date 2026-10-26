#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_CTYPE, "");

    float nota;
    int i=0,aprovados=0;

    while(i<10){

            printf("Digite a nota do %d° aluno: ", (i+1));
            scanf("%f",&nota);
           
            if (nota<0 || nota>10){
                printf("Digite um valor válido!\n");
            }else{
                if (nota>=6.0){

                    aprovados+=1;
                } 
                i++;
           }
           

    }

    printf("\nO número de aprovados é: %d",aprovados);
    return 0;
}