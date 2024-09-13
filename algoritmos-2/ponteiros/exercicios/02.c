/*
Faça um programa que leia 2 valores inteiros e chame uma função que receba estas  2 variáveis e troque o seu conteúdo, 
ou seja, esta função é chamada passando duas variáveis e, 
após  a execução da função¸ os valores das duas variáveis devem ter sido trocados entre si. 
Utilize ponteiros para a implementação do programa.

*/

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a; 
    *a = *b;
    *b = temp;
}

main()
{
    int a = 10, b = 5;

    printf("antes  ----\n");
    printf("a:%d, b:%d\n", a, b);

    swap(&a, &b);

    printf("depois ----\n");
    printf("a:%d, b:%d\n", a, b);
}
