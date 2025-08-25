#include <stdio.h>

int main()
{
    float nota, media = 0;
    printf("Sistema de Média da turma...\n");

    printf("Digite o nome do aluno: ");
    char nome[50];
    scanf("%s", nome);

    printf("Quantas notas o aluno %s possui? ", nome);
    int quantidade;
    scanf("%d", &quantidade);

    for (int i = 0; i < quantidade; i++)
    {
        do
        {
            printf("Digite a nota %d (entre 0 e 10): ", i + 1);
            scanf("%f", &nota);

            if (nota < 0 || nota > 10)
            {
                printf("Nota inválida! Tente novamente.\n");
            }
        } while (nota < 0 || nota > 10);

        media += nota;
    }

    float mediaFinal = media / quantidade;

    if (mediaFinal >= 7)
    {
        printf("Parabéns, %s! Você foi aprovado com nota %.2f!\n", nome, mediaFinal);
    }
    else
    {
        printf("Infelizmente, você foi reprovado com nota %.2f.\n", mediaFinal);
    }

    return 0;
}