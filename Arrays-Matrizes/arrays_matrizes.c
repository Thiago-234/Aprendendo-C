#include <stdio.h>

// Arrays
// [] array -> Serve para armazenar multiplos valores em uma variavel. Sempre devem ser do mesmo tipo de dado
// [posição] -> Começa sempre em 0, em que 0 é o primeiro termo do array

// Matrizes
// matriz [][] -> Matriz bidimensional. É formada por linhas e colunas, respectivamente
// matriz [][][] -> Matriz tridimensional. É formada por blocos, linhas e colunas, respectivamente
int main(){

    // Mostrando o primeiro elemento do array nums
    int nums[] = {1, 2, 3, 4, 5};
    printf("Primeiro termo de nums = %d\n", nums[0]);

    // Alterando o valor de uma posição
    nums[0] = 10;
    printf("Novo primeiro termo de nums = %d", nums[0]);

    // Mostrar todos os termos de um array
    printf("Todos os termos de nums:\n");
    for (int i = 0; i < 5; i++){
        printf("%d\n", nums[i]);
    }

    // Adicionar elementos
    int array[3];
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;

    // sizeof -> Conta o número de bytes de um array
    printf("Total de bytes do array nums = %d\n", sizeof(nums));

    // Para contar a quantidade de elementos de um array, basta dividir o total de bytes pelos bytes de um elemento
    int total_elementos = sizeof(nums) / sizeof(nums[0]);
    printf("Total de elementos do array nums = %d\n", total_elementos);

    // Forma de mostrar os elementos de um array de um tamanho N
    for (int i = 0; i < total_elementos; i++){
        printf("Elemento %d: %d\n", i, nums[i]);
    }

    // Matrizes bidimensionais
    int matriz[2][3] = {{1, 2, 3}, {4, 5, 6}};
    printf("Elemento [0][0] da matriz (Primeira linha e primeira coluna) = %d\n", matriz[0][0]);
    printf("Elemento [1][2] da matriz (Segunda linha e terceira coluna) = %d\n", matriz[1][2]);

    // Mudar o valor de um elemento
    matriz[1][2] = 100;
    printf("Elemento [1][2] da matriz (Segunda linha e terceira coluna) alterado = %d\n", matriz[1][2]);

    // Listar os elementos de uma matriz
    printf("Elementos da matriz bidimensional:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d] da matriz = %d\n", i, j, matriz[i][j]);
        }
        printf("\n");
    }

    // Matriz tridimensional
    int tridimensional[2][2][2] = {
        // Bloco 1
        {   // Linhas e colunas
            {1, 2}, 
            {3, 4}
        },
        // Bloco 2
        {   // Linhas e colunas
            {5, 6},
            {7, 8}
        }
    };
    printf("Elemento da 2ª coluna, da 1ª linha do bloco 2 = %d", tridimensional[1][0][1]);
    return 0;
}