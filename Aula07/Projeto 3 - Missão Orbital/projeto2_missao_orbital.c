#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_CTYPE,"");

    int i, codigo_cadete,pontuacao, pontuacao_total,continuar;
    float media;    

    do {

        i=0;
        pontuacao_total=0;
    
        printf("\n===== MISSÃO ORBITAL =====");

        printf("\nCódigo do cadete: ");
        scanf("%d", &codigo_cadete);

        printf("\n");
        while(i<3){
            printf("Pontuação da etapa %d: ",i+1);
            scanf("%d", &pontuacao);

            if (pontuacao<0 || pontuacao>100){
                printf("\nVALOR INVÁLIDO! Tente Novamente");
                printf("\n");
            }else{
                pontuacao_total+=pontuacao;
                i++;
            }
            
        }
        
        media = pontuacao_total/3;

        printf("\n--------- RESULTADO ---------\n");
        printf("Cadete: %d\n",codigo_cadete);
        printf("Pontuação: %.d\n",pontuacao_total);
        printf("Média: %.2f ",media);
        if (media == 100){
            printf("PONTUAÇÃO MÁXIMA!");
        }
        //calssificação
        if (media<50){
        printf("\nClassificação: Treinamento reiniciado");    
        }else if (media<70)
        {
            printf("\nClassificação: Cadete em recuperação");
        }else if (media<85)
        {
            printf("\nClassificação: Piloto aprovado");
        }else{
            printf("\nClassificação: Comandante da missão");
        }
        printf("\n------------------------------\n");

        printf("\nAvaliar outro cadete? 1-Sim | 0-Não: ");
        scanf("%d", &continuar);

    } while (continuar != 0);

    printf("Sistema encerrado");

    return 0;
}
