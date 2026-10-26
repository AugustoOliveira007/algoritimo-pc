#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_CTYPE, "");


    int contador=0;
    char dia[4];
    float consumo, media,soma, maior_consumo =0;
    FILE *arquivo = fopen("consumo.txt", "r");

    if(arquivo == NULL){
        printf("ERRO AO ABRIR O ARQUIVO\n");
        return 1;
    }

    while(fscanf(arquivo,"%3s %f",dia, &consumo) != EOF){
        soma += consumo;
        contador++;
        if(consumo >maior_consumo)
            maior_consumo= consumo;
    }
    media = soma/contador;
    printf("Relatorio\n");
    printf("quantidade de registros: %d", contador);
    printf("Consumo médio: %.1f\n",media);
    printf("Ma iorConsumo: %.1f\n",maior_consumo);

    fclose(arquivo);
    return 0;
}
