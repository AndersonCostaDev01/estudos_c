#include <stdio.h>
int main()
{
    
    char * nomesAlunos[][3] = {
        {"Aluno 1", "Portugues: 30", "Matematica: 90"},
        {"Aluno 2", "Portugues: 60", "Matematica: 70"},
        {"Aluno 3", "Portugues: 80", "Matematica: 80"},
        {"Aluno 4", "Portugues: 20", "Matematica: 100"}
    };
    int tamanho = sizeof(nomesAlunos) / sizeof(nomesAlunos[0]);
    printf("Quantidade de alunos: %d\n\n",tamanho);

    int escolha = 0;
    while (1)
    {
        printf("\nEscolha uma opcao:\n");
        printf("0 - para encerrar programa\n");
        printf("1 - Lista todos os alunos\n");
        printf("2 - Lista apenas 1 aluno\n");

        scanf("%d", &escolha);
        switch(escolha){
            case 1: {
                for(int i = 0; i < tamanho; i++) {
                    for(int e = 0; e < 3; e++){
                        printf("%s - ", nomesAlunos[i][e]);
                    }
                    printf("\n");
                }
                break;
            }
            case 2: {
                int aluno = 0;
                printf("Digite o index do aluno: ");
                scanf("%d", &aluno);
                for(int i = 0; i < 3; i++){
                    printf("%s - ", nomesAlunos[aluno-1][i]);
                }
                printf("\n");
                break;
            }
        }
        if(escolha == 0){
            break;
        }
    }



    return 0;
}
