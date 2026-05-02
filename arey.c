#include <stdio.h>
#include <string.h> // serve para tratativa de string dentro do codigo, no caso de receber uma string de texto e preciso
int main()
{
    int arrInt[] = {1,2,3,4,5,6,7,8,4};
    int tamanhoInt = sizeof(arrInt) / sizeof(arrInt[0]);
    printf("Tamanho do int %d\n", tamanhoInt);

    for(int i = 0; i < tamanhoInt; i++) {
        int var = arrInt[i];
        printf("%d \n", var);
    }

    char arrChar[][25] = {
        "Mae",
        "Pai",
        "Tioavo",
        "Irma"
    };
    int tamanhoChar = sizeof(arrChar) / sizeof(arrChar[0]);
    printf("Tamanho do char: %d\n", tamanhoChar);

    for(int i = 0; i < tamanhoChar; i++) {
        char var[25];
        strcpy(var, arrChar[i]); // para atribuir um char[] ao uma variavel e nessesario esta biblioteca <string.h>
        printf("%s - ", var);
    }

    return 0;
}