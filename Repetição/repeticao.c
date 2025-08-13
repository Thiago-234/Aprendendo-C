#include <stdio.h>

// while(condição) -> Executa enquanto a condição for verdadeira
// do while(condição) -> Executa uma vez e depois verifica a condição
// for -> Executa um bloco de código um número específico de vezes devido as condições

int main() {
    int i = 0;

    // Exemplo com while
    while (i < 5) {
        printf("Valor de i na %dª iteração: %d\n", i + 1, i);
        i++;
    }

    // Exemplo com do while
    i = 5;
    printf("Contagem regressiva:\n");
    do {
        printf("%d\n", i);
        i--;
    } while (i >= 0);

    // Exemplo com for
    int contagem = 1;
    for (i = 0; i <= 10; i += 2, contagem++) {
        printf("Valor de i na %dª iteração: %d\n", contagem, i);
    }

    return 0;
}
