#include <stdio.h>

#define COLUNA 10
#define LINHA 10

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
    
    int tabuleiro[LINHA][COLUNA];
    for(int i = 0 ; i < LINHA ; i++){
        for(int e = 0 ; e < COLUNA ; e++){
            tabuleiro[i][e] = 0;
        }
    }

    // define o navio na horizontal
    // ==========================================
    printf("Defina o inicio da embarcao\n");
    int posx = 2, posy = 4;
    printf("Posicao x: ");
    scanf("%d", &posx);
    printf("\nPosicao y : ");
    scanf("%d", &posy);
    
    for(int i = posy ; i < posy+3 ; i++){
        tabuleiro[posx][i] = 1;
    };

    // define o navio na vertical 
    // ==========================================
    printf("Defina o inicio da embarcao\n");
    posx = 7;
    posy = 2;
    printf("Posicao x: ");
    scanf("%d", &posx);
    printf("\nPosicao y: ");
    scanf("%d", &posy);

    for(int i = posx ; i < posx+3 ; i++){
        tabuleiro[i][posy] = 1;
    };


    // define os navios na diagonal
    // ==========================================

    printf("Defina o inicio da embarcação\n");
    posx = 1;
    posy = 1;
    printf("Posicao x: ");
    scanf("%d", &posx);
    printf("\nPosicao y: ");
    scanf("%d", &posy);

    for(int i = 0 ; i < posx+3; i++){
        tabuleiro[posx + i][posy + i] = 1;
    };


    printf("Defina o inicio da embarcação\n");
    posx = 1;
    posy = 1;
    printf("Posicao x: ");
    scanf("%d", &posx);
    printf("\nPosicao y: ");
    scanf("%d", &posy);

    for(int i = 0 ; i < posx+3; i++){
        tabuleiro[posx + i][posy - i] = 1;
    };
    
    // Printar a tabela no terminal
    // ==========================================
    for(int i = 0 ; i < LINHA ; i++) {
        for(int e = 0 ; e < COLUNA ; e++) {
            printf("%d ", tabuleiro[i][e]);
        };
        printf("\n");
    };
    
    return 0;
}