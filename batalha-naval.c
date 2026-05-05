#include <stdio.h>

int main() {

    // criação da tabela bidimensional de 10x10
    // int tabuleiro[10][10] = {
    //     {0,0,0,0,0,0,0,0,0,0}, // Linha 1
    //     {0,0,0,0,0,0,0,0,0,0}, // Linha 2
    //     {0,0,0,0,0,0,0,0,0,0}, // Linha 3
    //     {0,0,0,0,0,0,0,0,0,0}, // Linha 4
    //     {0,0,0,0,0,0,0,0,0,0}, // Linha 5
    //     {0,0,0,0,0,0,0,0,0,0}, // Linha 6
    //     {0,0,0,0,0,0,0,0,0,0}, // Linha 7
    //     {0,0,0,0,0,0,0,0,0,0}, // Linha 8
    //     {0,0,0,0,0,0,0,0,0,0}, // Linha 9
    //     {0,0,0,0,0,0,0,0,0,0}  // Linha 10
    // }; o codigo abaixo faz esta tabela de forma automatica sem escrita manual 
    
    int tabuleiro[10][10];
    for(int i = 0 ; i < 10 ; i++){
        for(int e = 0 ; e < 10 ; e++){
            tabuleiro[i][e] = 0;
        }
    }

    // define o navio na horizontal
    // ==========================================
    // printf("Defina o inicio da embarcao\n");
    int posx = 2, posy = 4;
    // printf("Posicao x: ");
    // scanf("%d", &posx);
    // printf("\nPosicao: ");
    // scanf("%d", &posy);
    
    for(int i = posy ; i < posy+3 ; i++){
        tabuleiro[posx][i] = 1;
    };

    // define o navio na vertical 
    // ==========================================
    // printf("Defina o inicio da embarcao\n");
    posx = 7;
    posy = 2;
    // printf("Posicao x: ");
    // scanf("%d", &posx);
    // printf("\nPosicao: ");
    // scanf("%d", &posy);

    for(int i = posx ; i < posx+3 ; i++){
        tabuleiro[i][posy] = 1;
    };
    
    // Printar a tabela no terminal
    for(int i = 0 ; i < 10 ; i++) {
        for(int e = 0 ; e < 10 ; e++) {
            printf("%d ", tabuleiro[i][e]);
        };
        printf("\n");
    };
    
    return 0;
}