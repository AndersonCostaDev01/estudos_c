#include <stdio.h>

/*
Neste codigo iremos ver tipos diferentes de variaveis e quais suas utilidades

existe algumas regras/boas praticas para criação de variaveis: 
    * não começamos com numeros as variaveis, sempre letras ou simbolos 
    * as variaveis são case sensitive ou seja letras maiusculas e minusculas são diferentes então teste e != de Teste 
    * existem algumas palavras que não podem ser usadas pois a propria linguagem ja utiliza elas, por exemplo: int, return, true, entre outras 

tipos de variaveis 
    * int: são variaveis que pode pegar numeros "Inteiros" positivos e negativos
    * float: são variaveis que podem receber numeros com ponto flutuantes ou decimais com varias casas decimais 
    * doble: São variaveis que podem receber decimais so que desta vez com apenas "Duas" casas decimais 
    * char: são variaveis que podem armazenar letras, o char tem uma caracteristica que ele armazena apenas uma letra a mesnos que informemos uma quantidade de letras atraves do [quantidade] ao final do nome da variavel 

Para definirmos o valor de uma variavel apos seu nome usamos = e dizemos o seu valor, se ja tivermos um valor dentro ele sera subistituido pelo novo valor, quando damos um novo valor a uma variavel ja existente no meio do codigo não precisamos repetir seu tipo podemos apenas informar seu nome e novo dado 
*/

int main(){

    int idade = 22;
    int quantidade = 10;
    float altura = 1.72;
    char letra = 's';
    char nome[250] = "Anderson";

    printf("Ola 2");

    return 0;
}