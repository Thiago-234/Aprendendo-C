#include <stdio.h>

// int -> Armazena números inteiros
// float -> Armazena números decimais
//char -> Armazena caracteres únicos com aspas simples

// Especificadores de formato são usados para informar o tipo de dado da váriavel, usando inicialmente um %
// %d -> Para inteiros
// %f -> Para decimais
// %c -> Para caracteres

int main(){
    // Definindo valores
    int num1 = 10;
    float num2 = 2.5;
    char letra = 'T';

    // Imprimindo
    printf("Número inteiro = %d \n", num1);
    printf("Um valor decimal = %f \n", num2);
    printf("Uma letra = %c \n", letra);
    printf("Uma letra %c e um numero %d \n", letra, num1);
    printf("Numero %d não armazenado \n", 25);

    // Alterando valores
    num1 = 25;
    printf("Agora, num1 tem como valor %d", num1);

    return 0;
}