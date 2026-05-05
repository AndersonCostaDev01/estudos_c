#include <stdio.h>

#define LINHAS 25
#define COLUNAS 25

int main(){
    
    int matriz[LINHAS][COLUNAS];

    int soma = 0;

    for(int i = 0 ; i < LINHAS ; i++){
        for(int e = 0 ; e < COLUNAS; e++){
            soma++;
            matriz[i][e] = soma;
            printf("%d ", matriz[i][e]);
        };
        printf("\n");
    };

    return 0;
};