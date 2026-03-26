#include <stdio.h>

/*
Pequeno teste para verificar conteudo
objetivo pegar dados organizalos e projetar em tela 
*/

int main(){
    int idade, matricula;
    float altura;
    char nome[250];

    printf("digite sua idade: ");
    scanf("%d", &idade);

    printf("digite sua altura: ");
    scanf("%f", &altura);

    printf("digite seu nome: ");
    scanf("%s", nome);

    printf("digite sua matricula: ");
    scanf("%d", &matricula);


    printf("Nome do aluno: %s - matricula: %d \n", nome, matricula);
    printf("Idade: %d - altura: %f \n", idade, altura);
    return 0;
}