#include<stdio.h>
#include<locale.h>


int main(){

    FILE *arquivo;
    setlocale(LC_CTYPE, "");
    int i,num;

    arquivo = fopen("tabuada.txt", "w");

    if (arquivo == NULL){
        printf("ERRO AO CRIAR ARQUIVO!\n");
        return 1;
    }

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    fprintf(arquivo, "Tabuada do %d\n",num);//tem um f pra mais arquivos

    for (i=0; i<11; i++){
        fprintf(arquivo,"%d * %d = %d\n", num, i, (num*i));
    }
    printf("Arquivo criado\n");
    fclose(arquivo);
    return 0;
}
