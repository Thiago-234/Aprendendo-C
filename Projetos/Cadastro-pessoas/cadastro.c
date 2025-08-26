#include <stdio.h>

// Criando um "apelido" para não ter de declarar a struct toda vez com o typedef e o Pessoa
typedef struct {
    char nome[100];
    int idade;
    float altura;
} Pessoa;

int main() {
    int quantidade;

    printf("Quantas pessoas deseja cadastrar? ");
    scanf("%d", &quantidade);

    // Cria um array de pessoas com os 3 atributos da struct
    Pessoa pessoas[quantidade];

    // Limpa o buffer
    getchar();

    for (int i = 0; i < quantidade; i++) {
        printf("\nPessoa %d\n", i + 1);

        printf("Nome: ");
        fgets(pessoas[i].nome, sizeof(pessoas[i].nome), stdin);

        printf("Idade: ");
        scanf("%d", &pessoas[i].idade);

        printf("Altura (em metros): ");
        scanf("%f", &pessoas[i].altura);

        getchar(); // Limpa o buffer
    }

    // MLista os usuários cadastrados
    printf("\n=== Cadastro de Pessoas ===\n");
    for (int i = 0; i < quantidade; i++) {
        printf("Pessoa %d: %s", i + 1, pessoas[i].nome);
        printf("Idade: %d ano(s)\n", pessoas[i].idade);
        printf("Altura: %.2f m\n\n", pessoas[i].altura);
    }

    return 0;
}
