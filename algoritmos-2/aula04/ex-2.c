#include <stdio.h>

void calculamedia(int notas[3][5], int medias[5])
{
    for(int i=0;i<5;i++)
    {
        medias[i] = (notas[0][i]*3 + notas[1][i]*6 + notas[2][i])/10;
    }
}

int main()
{
    int notas[3][5];
    int medias[5];

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Entre com a nota do aluno %d, P%d: ", i, j+1);
            scanf("%d", &notas[j][i]);        
        }
    }

    calculamedia(notas, medias);

    for(int i=0;i<5;i++)
    {
        printf("media aluno %d: %d\n", i, medias[i]);
    }
}