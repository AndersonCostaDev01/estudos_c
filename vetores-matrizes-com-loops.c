#include <stdio.h>

int main(){
    // difinição da matriz
    int matriz[3][3];
    
    for(int i = 0 ; i < 3 ; i++){
        for(int e = 0 ; e < 3 ; e++){
            matriz[i][e] = i * e;
            printf("%d ", matriz[i][e]);
        };
        printf("\n");
    };
    printf("\n");

    // definição de operação entre matrizes 
    int matriz1[2][2] = {{1,2},{8,5}};
    int matriz2[2][2] = {{2,5},{4,7}};
    int matrizSoma[2][2];
    
    // soma das matrizes
    printf("A soma das matrizes 1 e 2 e: ");
    for(int i = 0 ; i < 2 ; i++){
        for(int e = 0 ; e < 2 ; e++){
            matrizSoma[i][e] = matriz1[i][e] + matriz2[i][e];
            printf("%d ", matrizSoma[i][e]);
        };
    };
    printf("\n");
    
    return 0 ;
}