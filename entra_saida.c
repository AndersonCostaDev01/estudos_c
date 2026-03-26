#include <stdio.h>


/*
Entrada e saida de dados serve para que possamos nos comunicar com o codigo para ver e passar informaçoes durante sua execução

para mostrar alguma informação usamos o printf(""); que ira mostra no terminal alguma informação, podendo ser uma mensagem fixa ou varivael 
    printf("Ola mundo"); 
        isso retorna um "Ola mundo" dentro do terminal

Para pegarmos alguma informação usamos o scanf("texto", variavel); e com isso guardamos o que for digitado dentro da variavel para usarmos depois 
    char nome[250];
    printf("digite um nome");
    scanf("%s", nome);
        isso pega o nome digitado e guarda dentro da variavel nome 

Para definir como o resultado ira apareceser usamos o identificador de formato "%s", existem varios tipos de identificador de fromato
    %d: Numeros inteiros no formato decimal
    %i: mesma coisa do %d
    %f: Imprime ponto flutuante no formato padrao 
    %e: imprime ponto flutuante no formato de notação cientifica 
    %c: imprime unico caractere
    %s: imprime cadeia (string) de caracteres

Para ler tipos de dados com exeção ão %s todos os outros nas suass variaveis precisamos usar &varivael
    
Para organizamos a saida de dados peodemos usar o \n que tem a função de pular uma linha 
*/

int main(){
    char nome[250];
    int idade;

    printf("digite um nome: ");
    scanf("%s", nome);

    printf("digite sua idade: ");
    scanf("%d", &idade);

    printf("Ola %s\n", nome);
    printf("Sua idade e %d", idade);

    return 0;
}