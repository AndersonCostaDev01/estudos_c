#include <stdio.h>

#define linha 6
#define coluna 6

int main(){

    int matriz[linha][coluna], valor = 0;
    for(int i = 0 ; i < linha ; i++){
        for(int j = 0 ; j < coluna ; j++){
            valor++;
            matriz[i][j] = valor;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    int target = 30; 

    for(int i = 0 ; i < linha ; i ++) {
        for(int j = 0 ; j < coluna ; j++){
            if(matriz[i][j] == target || matriz[i][j] == 9){
                printf("Numero: %d na posicao: {%d - %d}\n", matriz[i][j], i, j);
            }
        } 
    }

    return 0;
}