#include <stdio.h>
#include <stdbool.h>

// if -> Verificar se uma condição for verdadeira
// else -> Executa um código se um if der falso
// else if -> Executa um novo código se um if for falso (outra condição)
// Switch -> Várias opções de condição

// Ternário
// ? -> Executa um código se uma condição der verdadeira
// : -> Executa um código se uma condição der falsa

int main() {
    int idade = 17;
    char senha[] = "senha1234";

    // If, else if e else
    if(idade < 18){
        printf("Menor de idade\n");
    }
    else if(idade >= 18 && idade < 65){
        printf("Adulto\n");
    }
    else {
        printf("Idoso\n");
    }

    // Ternário
    char* verificacao = (idade < 18) ? "Menor de idade" : "Maior de idade";
    printf("%s\n", verificacao);

    //Switch
    switch(idade) {
        case 0 ... 17:
            printf("Menor de idade\n");
            break;
        case 18 ... 64:
            printf("Adulto\n");
            break;
        default:
            printf("Idoso\n");
            break;
    }
}