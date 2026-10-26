#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_CTYPE, "");

    float saldo,soma=0;
    int i;

    for(i=0;i<7;i++){

            printf("Digite o saldo do %d° dia: ", (i+1));
            scanf("%f",&saldo);
            
            soma +=saldo;
    }

    printf("\nA soma do valor de vendas dos 7 dias é: %.2f",soma);
    return 0;
}