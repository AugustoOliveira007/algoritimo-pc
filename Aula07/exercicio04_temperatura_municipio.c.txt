#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_CTYPE, "");

    char municipio[50];
    float temperatura;
    int i,quantidade=0;

    for(i=0;i<5;i++){

            printf("Digite o nome do municipio: ");
            scanf("%49s", municipio);

            printf("Digite a temperatura média: ");
            scanf("%f", &temperatura);

            if (temperatura<10)
            {
                quantidade+=1;
            }
            
    }

    printf("\nA quantidade de municipios com a temperatura média inferior a 10°C é: %d",quantidade);
    return 0;
}