// Criando uma estrutura
struct estrutura
{
    char nome[100];
    int idade;
    char inicial_nome;
};

int main()
{
    // Declarando a estrutura como pessoa1
    struct estrutura pessoa1;

    // Atribuindo valores à estrutura
    strcpy(pessoa1.nome, "Thiago");
    pessoa1.idade = 17;
    pessoa1.inicial_nome = 'T';

    printf("Criando uma pessoa com base em uma estrutura\n");
    printf("Seu nome: %s \n", pessoa1.nome);
    printf("Sua idade: %d \n", pessoa1.idade);
    printf("Sua inicial: %c", pessoa1.inicial_nome);

    return 0;
}