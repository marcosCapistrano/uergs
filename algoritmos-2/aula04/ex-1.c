#include <stdio.h>

void solicitarGastos(int mes, int *totalLuz, int *totalOleo) 
{
    int luz, oleo;
    printf("Entre oara o mês %d, os valores de luz e oleo: ", mes+1);
    scanf("%d %d", &luz, &oleo);

    *totalLuz += luz;
    *totalOleo += oleo;
}

int main()
{
    int totalGanho;
    int totalLuz = 0, totalOleo = 0;

    printf("Bem vindo!\n");
    printf("Entre com o ganha anual da colheita: ");
    scanf("%d", &totalGanho);

    for(int i=0; i<12;i++)
    {
        solicitarGastos(i, &totalLuz, &totalOleo);
    }

    printf("Valor liquido: %d\n", totalGanho - (totalLuz+totalOleo));
    printf("Total luz: %d\n", totalLuz);
    printf("Total oleo: %d\n", totalOleo);

}