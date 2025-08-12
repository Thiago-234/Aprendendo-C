#include <stdio.h>

// const -> Sempre será o valor, não será possível altera-la
// Operadores aritméticos (+, -, /, *) mesma coisa
// % -> Módulo, normalmente usado para descobrir resto de divisões
// ++ ou -- -> Incremento ou decremento. Soma ou subtrai 1 ao valor determinado

//Metodos de atribuição --- x = 5
// += ou -= -> Adição ou subtração. Adiciona um valor ao valor determinado. Ex: x += 3 -> x = x + 3
// %= -> Módulo. Mostra o resto de uma divisão. Ex: x %= 3 -> x = x % 3 -> Resto 2

// Operadores
//Comparação
// == -> Igual, somente o valor
// != -> Diferente de
// > ou < -> Maior ou menos que
// >= ou <= -> Maior ou igual ou menor ou igual

// Lógicos
// && -> Retorna true caso ambas condições sejam verdadeiras.
// || -> Retorna true se uma das condições forem verdadeiras
// ! -> Not. Ele reverte uma situação lógica. Ex: !verdadeiro = falso, !falso = verdadeiro

int main() {
    // Constante -> não pode ser alterado
    const int constante = 10;

    int x = 7;
    int y = 3;

    // Operadores aritméticos
    int soma = x + y;       
    int sub = x - y;
    int mult = x * y;
    int div = x / y;        // 7 / 3 = 2 (divisão inteira)
    int resto = x % y;      // 7 % 3 = 1 (resto da divisão)

    
    x++;     // agora x = 8
    y--;     // agora y = 2

    // Métodos de atribuição
    x += 5;     // 8 + 5 = 13
    y %= 2;     // 2 % 2 = 0

    // Operadores de comparação
    int igual = (x == y);      // 13 == 0 -> falso
    int diferente = (x != y);  // 13 != 0 -> verdadeiro
    int maior = (x > y);       // 13 > 0 -> verdadeiro
    int menor_igual = (x <= constante);  // 13 <= 10 -> falso

    // Operadores lógicos
    int condicao1 = (x > 10);   // verdadeiro
    int condicao2 = (y == 0);   // verdadeiro
    int e = condicao1 && condicao2;  // verdadeiro
    int ou = condicao1 || (y > 5);   // verdadeiro
    int not = !condicao1;            // falso

    // Resultados
    printf("constante = %d\n", constante);
    printf("soma = %d\n", soma);
    printf("sub = %d\n", sub);
    printf("mult = %d\n", mult);
    printf("div = %d\n", div);
    printf("resto = %d\n", resto);
    printf("x (após incremento e +=) = %d\n", x);
    printf("y (após decremento e %%) = %d\n", y);
    printf("igual (x == y) = %d\n", igual);
    printf("diferente (x != y) = %d\n", diferente);
    printf("maior (x > y) = %d\n", maior);
    printf("menor_igual (x <= constante) = %d\n", menor_igual);
    printf("condicao1 && condicao2 = %d\n", e);
    printf("condicao1 || (y > 5) = %d\n", ou);
    printf("!condicao1 = %d\n", not);

    return 0;
}
