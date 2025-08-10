#include <stdio.h>

int main(){
    // Char é para apenas 1 caractere
    char letra = 'T';
    printf("único caractere %c \n", letra);

    // Char esta relacionada a tabela ASCII
    letra = 84;
    printf("Na tabela ASCII %c = 84 \n", letra);

    // Para armazenar palavras, use [] e o especificador %s
    char palavra[] = "Teste";
    printf("%s", palavra);

    //Usando float e double. Podem ser usados também para notação científica
    float num1 = 10.99;
    double num2 = 9.99;

    // 10 * 10^2
    float cientifico1 = 10e2;
    // 9 * 10^5
    double cientifico2 = 9e5;
    printf("Notação Científica 1 = %f \n", cientifico1);
    printf("Notação Científica 2 = %lf \n" , cientifico2);

    // Filtrar 0 extras
    float a = 2.52;
    printf("Numero Float = %f \n", a);
    printf("Numero Float com 1 casa decimal = %.1f \n", a);
    printf("Numero Float com 2 casas decimais = %.2f \n", a);
    printf("Numero Float com 3 casas decimais = %.3f \n", a);

    // Obter o tamanho dos dados em bytes
    int Int;
    float Float;
    double Double;
    char Char;
    printf("Tamanhos em bytes: \n Int = %zu \n Float = %zu \n Double = %zu \n Char = %zu", sizeof(Int), sizeof(Float), sizeof(Double), sizeof(Char));

    // Conversões
    // Implícita ocorre automaticamente, explícita manualmente

    // Implícita
    // De int para float
    float num3 = 2;
    printf("int para float = %f \n", num3);
    
    // De float para int
    int num4 = 2.99;
    printf("float para int = %d \n", num4);

    // Exemplo
    int num5 = 7;
    int num6 = 2;
    int divisao = num5 / num6;
    // Ambos os numeros são inteiros, logo retornará 2
    printf("Divisão de exemplo implícita = %f \n", divisao);  
    
    // Explícita
    float divisao2 = (float) num5 / num6;
    printf("Divisão de exempli explíclita = %f", divisao2);
    
    return 0;
}