#include <stdio.h>
#include <math.h>

int main()
{
    float num1;
    float num2;
    int opc;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("Escolha uma das operações:\n[1] - Soma\n[2] - Subtração\n[3] - Multiplicação\n[4] - Divisão\n[5] - Potênciação\n[6] - Radiciação\n");
    scanf("%d", &opc);

    switch (opc)
    {
    case 1:
        printf("A soma de %.2f e %.2f é %.2f\n", num1, num2, num1 + num2);
        break;
    case 2:
        printf("A diferença de %.2f e %.2f é %.2f\n", num1, num2, num1 - num2);
        break;
    case 3:
        printf("A multiplicação de %.2f e %.2f é %.2f\n", num1, num2, num1 * num2);
        break;
    case 4:
        if (num2 == 0)
            printf("Erro: divisão por zero.\n");
        else
            printf("A razão de %.2f e %.2f é %.2f\n", num1, num2, num1 / num2);
        break;
    case 5:
        printf("Potência de %.2f ^ %.2f é %.2f\n", num1, num2, pow(num1, num2));
        break;
    case 6:
        if (num2 == 0)
            printf("Erro: índice da raiz não pode ser zero.\n");
        else
            printf("A raiz %.2f de %.2f é %.2f\n", num2, num1, pow(num1, 1.0 / num2));
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }
    return 0;
}
