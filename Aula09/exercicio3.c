# include<stdio.h>
# include<locale.h>

int main(){

    FILE * arquivo = fopen("tabuada.txt","r");
    setlocale(LC_CTYPE, "");
    char linha[100];

    if(arquivo == NULL) {
        printf("Erro ao ao abrir o arquivo\n");
        return 1;
    }

    while(fgets(linha,sizeof(linha),arquivo)!=NULL) {
        printf("%s", linha);
    }

    fclose(arquivo);
    return 0;

}

