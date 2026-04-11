

/*
Neste codigo vamos criar uma calculadora de media que ira receber 3 notas e retornar uma media de delas 
nota1 + nota2 + nota3 / 3
adicionei a função de verificar se a nota esta na media, se estiver na media ou acima aparece aprovado, caso contrario aparece reprovado 
*/
int main()
{
    float nota1, nota2, nota3;
    float media;

    printf("Digite a primeira nota: \n");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: \n");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: \n");
    scanf("%f", &nota3);

    media = (float) (nota1 + nota2 + nota3) / 3;


    // conceito de condiçoes para verificar se esta aprovado ou reprovado
    if (media >= 7) {
        printf("Aprovado");
    } else {
        printf("Reprovado");
    }
  
    return 0;
}