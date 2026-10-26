#include<stdio.h>
#include<locale.h>

int main () {

    setlocale(LC_CTYPE, "");

    int cpf, i;
    float preco, total_compra;

    printf("Qual o seu cpf? ");
    scanf("%d",&cpf);

    for (i=1 ; i<=5 ; i++) {
        printf("Defina o preço do item: ");
        scanf("%f", &preco);
        total_compra += preco;
    }

    printf("\nCompra do cpf: %d\nO total da compra é: R$%.2f\n",cpf, total_compra);

    return 0;
}
