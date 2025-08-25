#include <stdio.h>
// Biblioteca de funções matemáticas
#include <math.h>
// Exemplo
// ceil(x) -> Arredonda um número para cima
// floor(x) -> Arredonda um número para baixo
// round(x) -> Arredonda um número para o inteiro mais próximo

int soma(int a, int b) {    // Declaração
    return a + b;           // Definição
}

float grausCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main(){
    // Exemplo de soma
    printf("Soma de dois números\n\n");

    printf("Digite o primeiro número: \n");
    int num1;
    scanf("%d", &num1);

    printf("Digite o segundo número: \n");
    int num2;
    scanf("%d", &num2);
    printf("A soma é = %d\n", soma(num1, num2));

    // Listando vários resultados
    int lista_resultados[3];
    lista_resultados[0] = soma(1, 2);
    lista_resultados[1] = soma(23, 26);
    lista_resultados[2] = soma(100, 111);

    for (int i = 0; i < 3; i++) {
        printf("Resultados %d: %d\n", i + 1, lista_resultados[i]);
    }

    // Conversor de temperatura
    printf("Conversor de temperatura\n");
    printf("Digite a temperatura em Fahrenheit: \n");
    float tempFahrenheit;
    scanf("%f", &tempFahrenheit);
    printf("A temperatura em Celsius é: %.2f\n", grausCelsius(tempFahrenheit));

    return 0;
}