/*
Escreva um programa que utilizando uma função minmax
que receba um vetor inteiro e os endereços de duas variáveis inteiras (min e max), 
e deposite nessas variáveis o valor do  mínimo valor do vetor e o valor de um elemento máximo do vetor, respectivamente. 
No main o vetor é lido via teclado e depois imprime os valores de min e max. O vetor armazena até 10 valores inteiros.
*/

#include <stdio.h>

#define SIZE 10

void minmax(int *vet, int *min, int *max)
{
    for(int i=0; i<SIZE; i++) {
        if(i == 0) 
        {
            *min = vet[i];
            *max = vet[i];
        }

        if(vet[i] < *min)
            *min = vet[i];

        if(vet[i] > *max)
            *max = vet[i];
    }
}

main()
{
    int vetor[SIZE];

    for(int i=0; i<SIZE; i++)
        scanf("%d", &vetor[i]);

    int min, max;
    minmax(vetor, &min, &max);

    printf("Valor minimo: %d\n", min);
    printf("Valor maximo: %d\n", max);

}
