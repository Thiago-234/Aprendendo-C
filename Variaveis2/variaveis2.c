#include <stdio.h>

int main(){
    // Declarando multiplas variaveis do mesmo tipo
    int a = 3, b = 6, c = 9;
    printf("Somando as váriaveis a, b ,c = %d \n", a + b + c);

    // Atribuir o mesmo valor ao mesmo tipo
    int d, e, f;
    d = e = f = 5;
    printf("Soma de mesmo valor e tipo = %d \n", d + e + f);

    a = 5;
    b = 6;
    int soma = a + b;
    printf("Soma básica = %i \n", soma);

    return 0;
}