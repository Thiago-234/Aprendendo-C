#include <stdio.h>

// scanf -> Lê os dados de uma entrada
// & -> Operador de referência do endereço da variável

int main() {
    int idade;
    char nome[10];      // Precisa determinar o tamanho da variável
    // O char considera espaços em branco como terminações (\0)

    // Pedindo a idade
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    // Pedindo o nome
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Bem-vindo %s! Sua idade é %d\n", nome, idade);

    // Multiplas entradas
    float altura;
    float peso;

    printf("Digite sua altura e seu peso: ");
    scanf("%f %f", &altura, &peso);
    printf("Sua altura é %.2f e seu peso é %.2f\n", altura, peso);

    // Para palavras maiores, utiliza-se o fgets()
    // stdin -> Indica que receberá dados do teclado
    /*char nome_completo[50];
    printf("Digite seu nome completo: ");
    fgets(nome_completo, sizeof(nome_completo), stdin);
    printf("Olá %s!", nome_completo);
    */

    // Endereço de memória
    int memoria = 100;
    printf("Endereço de memória da variável \'memoria\': %p\n", &memoria);

    // Ponteiros
    // variável de ponteiro -> Armazena o endereço da variável
    int num = 25;
    int* ponteiro_num = &num; // ponteiro_num aponta para o endereço de num
    
    printf("Número = %d\n", num);
    printf("Endereço de memória de num = %p\n", &num);
    printf("Endereço de memória de ponteiro_num = %p\n", ponteiro_num);
    printf("Valor apontado por ponteiro_num = %d\n", *ponteiro_num);

    return 0;
}