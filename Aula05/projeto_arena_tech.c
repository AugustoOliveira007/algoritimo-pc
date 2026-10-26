#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_CTYPE, "");

    // Entradas
    int qte_participantes, qte_jogadores_por_time, qte_computadores;
    float potencia, duracao, preco_kwh;
    float preco_kit, outros_custos, orcamento;

    // Processamento
    int qte_times, computadores_faltantes;
    float consumo_energia, custo_energia;
    float custo_alimentacao, custo_total;
    float custo_por_participante, saldo;

    // Entrada de dados
    // Solicite ao usuario todos os dados do evento.

    printf("Qual será a quantidade total de participantes? ");
    scanf("%d", &qte_participantes);

    printf("Qual será a quantidade de jogadores em cada time? ");
    scanf("%d", &qte_jogadores_por_time);

    printf("Qual a quantidade de computadores disponíveis? ");
    scanf("%d", &qte_computadores);

    printf("Qual é a potência média de cada computador(watts)? ");
    scanf("%f", &potencia);

    printf("Qual será a duração do evento(horas)? ");
    scanf("%f", &duracao);

    printf("Qual será o preço de 1kWh de energia? ");
    scanf("%f", &preco_kwh);

    printf("Qual será o preço de um kit de alimentação por participante? ");
    scanf("%f", &preco_kit);

    printf("Quais foram outros custos do evento? ");
    scanf("%f", &outros_custos);

    printf("Qual é o orçamento máximo disponível para o evento? ");
    scanf("%f", &orcamento);

    // Calculos
    qte_times = qte_participantes / qte_jogadores_por_time;
    consumo_energia = (qte_computadores * potencia * duracao) / 1000;
    custo_energia = consumo_energia * preco_kwh;
    custo_alimentacao = qte_participantes * preco_kit;
    custo_total = custo_energia + custo_alimentacao + outros_custos;
    custo_por_participante = custo_total / qte_participantes;
    saldo = orcamento - custo_total;

    // Relatorio geral

    printf("\n============== ARENA TECH ==============\n");
    printf("\nParticipantes: %.2d", qte_participantes);
    printf("\nTimes necessários: %.2d", qte_times);
    printf("\nComputadores disponíveis: %.2d", qte_computadores);

    if (qte_computadores >= qte_participantes) {
        printf("\nInfraestrutura: SUFICIENTE!\n");
    } else {
        computadores_faltantes = qte_participantes-qte_computadores;
        printf("\nInfraestrutura: INSUFICIENTE!\nQuantidade faltante: %.2d\n", computadores_faltantes);
    }

    printf("\nConsumo estimado: %.2f kWh", consumo_energia);

    if (consumo_energia <= 20) {
        printf("\Classificação do consumo: BAIXO\n");
    } else if (consumo_energia > 20 && consumo_energia < 40){
        printf("\nClassificação do consumo: MODERADO\n");
    } else {
        printf("\nClassificação do consumo: ALTO");
    }

    printf("\nCusto da energia: R$%.2f", custo_energia);
    printf("\nCusto da alimentação: R$%.2f", custo_alimentacao);
    printf("\nOutros custos: R$%.2f", outros_custos);
    printf("\nCUSTO TOTAL: R$%.2f", custo_total);
    printf("\nCUSTO POR PARTICIPANTE: R$%.2f", custo_por_participante);

    printf("\n\nOrçamento disponível: R$%.2f", orcamento);
    printf("\nSaldo: R$%.2f", saldo);

    if (custo_total > orcamento) {
        printf("\nSituação do orçamento: ACIMA DO ORCAMENTO\n");
    } else if (custo_total <= orcamento && saldo <= orcamento*0.05) {
        printf("\nSituação do orçamento: NO LIMITE DO ORÇAMENTO\n");
    } else {
        printf("\nSituação do orçamento: DENTRO DO ORÇAMENTO\n");
    }

    if (qte_participantes > qte_computadores || custo_total > orcamento) {
        printf("\nDECISÃO FINAL: NÃO RECOMENDADO!");
    } else if (qte_participantes <= qte_computadores && custo_total <= orcamento && consumo_energia > 40) {
        printf("\nDECISÃO FINAL: APROVADO COM RESSALVAS!");
    } else {
        printf("\nDECISÃO FINAL: APROVADO!");
    }
    printf("\n=========================================");


    return 0;
}
