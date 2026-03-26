#include <stdio.h>
/*
A modularização e a forma de organizar meu codigo para que ele seja escrito de forma separada e eu una ele quando necessario 
cada função deve ter sua funcionalidade que sera usado, isso mantem uma organização muito melhor e posso reaproveitar meu codigo varias vezes 

variaveis que serão usadas por mais de uma função podem ser declaradas fora do escopo daf unção e serem acessiveis a todoas as funçoes dentro do arquivo 
*/


// Declaração de variaveis Globais
float nota1, nota2, nota3;

void entradaDados()
{
    printf("digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("digite a terceira nota: ");
    scanf("%f", &nota3);
}

float calculorMedia()
{   
    float media;
    media = (nota1 + nota2 + nota3) / 3;
    return media;
}

void saidaDados(float media)
{
    printf("A Media do aluno e: %f\n", media);
    printf("Parabens");
}

int main()
{
    float media;

    entradaDados();
    media = calculorMedia();
    saidaDados(media);
    return 0;
}