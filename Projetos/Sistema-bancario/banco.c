#include <stdio.h>

float saldo = 0;

void depositar()
{
    printf("Digite o valor a ser depositado: ");
    float deposito;
    scanf("%f", &deposito);

    if (deposito <= 0)
    {
        printf("Valor inválido para depósito!\n");
        return;
    }

    saldo += deposito;
    printf("Depósito realizado com sucesso! Novo saldo: %.2f\n", saldo);
}

void sacar()
{
    printf("Digite o valor do saque: ");
    float saque;
    scanf("%f", &saque);

    if (saque <= 0)
    {
        printf("Valor inválido para saque!\n");
        return;
    }

    if (saque > saldo)
    {
        printf("Saldo insuficiente!\n");
        return;
    }

    saldo -= saque;
    printf("Saque realizado com sucesso! Novo saldo: %.2f\n", saldo);
}

void verSaldo()
{
    printf("Saldo = %.2f\n", saldo);
}

int main()
{
    int opc;

    do
    {
        printf("\nEscolha uma opção:\n");
        printf("[1] - Depositar\n[2] - Sacar\n[3] - Ver Saldo\n[4] - Sair\n");
        printf("Opção: ");
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
            depositar();
            break;
        case 2:
            sacar();
            break;
        case 3:
            verSaldo();
            break;
        case 4:
            printf("Saindo...\n");
            break;
        default:
            printf("Opção inválida!\n");
        }

    } while (opc != 4);

    return 0;
}