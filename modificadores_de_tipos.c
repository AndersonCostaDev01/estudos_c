#include <stdio.h>


/*
Modificadores de tipos são expresoes usadas para informar que um numero não tera sinal de positivo ou negativo, isso faz com que o numero seja sempre positivo 
isso dobra o tamanho do numero que podemos guardar dentro dele 
usamos o unsigned int/char para informar isso ao sistema 

temos tambem o long que permite que aumentar o tamanho de uma variavel 
para mopstrarmos em tela um long usamos o %ld
se quisermos um numero maior ainda usamos long long int
quando usamos long long para imprimirmos ele usamos %lld

podemos juntar os dois e criar um unsigned long o que vai tirar o sinal e vai aumentar o tamanho da variavel 

==================================

ja existe o oposto do que foi mostrado acima que e quando queremos uma variavel pequena, em caso onde não precisamos de um numero muito grande para economizar memoria usamos o short int que armazena menores variaveis 
*/
int main()
{
    int numeroSinal = 3000000000;
    printf("Numero com sinal: %d\n", numeroSinal);
    // nete caso o retorno sera 'Numero com sinal: -1294967296' o que não e o numero que digitamos

    unsigned int numeroSemSinal = 3000000000;
    printf("Numero sem sinal: %u\n", numeroSemSinal);

    long int numeroLong = 300000000;
    printf("Numero long: %ld\n", numeroLong);

    return 0;
}