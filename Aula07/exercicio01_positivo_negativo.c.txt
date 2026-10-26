#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_CTYPE, "");

    float num,maior=-99999999;
    int i,quantidade,positivo=0,negativo=0,neutro=0;

    printf("Digite a quantidade de valores analisados: ");
    scanf("%d",&quantidade);

    for(i=0;i<quantidade;i++){

            printf("Digite a %d° nota: ", (i+1));
            scanf("%f",&num);
            if (num<0){
                negativo+=1;
            }else if(num>0){
               positivo+=1;
            }else{
                neutro+=1;
            }

            if(num>maior){
                maior = num;
            }
    }

    printf("\nQuantidade de Números Positivos: %d",positivo);
    printf("\nQuantidade de Números Negativos: %d",negativo);
    printf("\nO maior valor é: %.2f",maior);
    return 0;
}
