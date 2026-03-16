#include <stdio.h> // Nesta linha importamos a biblioteca que permite que tenhamos entrada e saida de dados no C

// o main e a primeira função que sera executada dentro do nosso codigo, dentro dela vamos definir o que sera executado
int main(){

    // O printf e uma função que imprime na tela o que for descrito dentro da () com aspas duplas "" o \n serve para quebrar linha 
    printf("Ola mundo\n");


    /*
    Abaixo irei criar uma calculadora que pega dois numeros que serão digitados no terminal e retorna um resultado visual 
    num1 + num2 = resultado 
    */

    int num1, num2, resultado; // nesta parte criamos as variaveis sem atribuir valor a sellas, mas no C e nessesario definir seu tipo na hora da criação
    printf("Disgite um numero: "); // printf imprime o texto no terminal
    scanf("%d", &num1); // scanf pega o que for digitado no terminal e guarda na variavel
    printf("Disgite outro numero: ");
    scanf("%d", &num2);
    resultado = num1 + num2; // resultado vai guarda o resultado da soma de num1 + num2 
    printf("a soma de : %d + %d = %d", num1, num2, resultado); // este printf pega as variaveis e mescla elas com textos("string") e mostra todo o resultado como um texto 

    return 0; // todda função tem que ter um return obrigatorio
}
