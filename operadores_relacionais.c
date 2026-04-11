#include <stdio.h>
/*
Operadores relacionais são formas de comparar variaveis/valores e ver algumas caracteristicas como 
se ele e maior que: >
se ele e menor que: <
se ele e maior ou igual: >=
se ele e menor ou igual: <=
se ele e igual: ==
se ele e diferente: !=
eles retornam 0 ou 1 dependendo da verificação, se for verdade ele retoerna 1 se for falso ele retorna 0

mesmo no caso de tipos de numeros diferentes por exemplo 5 e 5.0 eles serão iguais 
*/

int main()
{
    int a = 5;
    float b = 5.0;
    char c = 'c';

    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);

    printf("a > c: %d\n", a > c);


    return 0;
}