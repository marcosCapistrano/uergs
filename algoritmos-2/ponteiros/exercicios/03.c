/*
Escreva um programa que contenha duas variáveis inteiras. 
Compare seus endereços e exiba a variável que encontra-se no maior endereço.
*/

#include <stdio.h>

main()
{
    int a = 10, b = 5;

    printf("&a: %p - &b: %p\n", &a, &b);

    if(&a > &b)
        printf("a maior\n");
    else
        printf("b maior\n");
}
