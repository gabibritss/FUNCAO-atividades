#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int somar(int n1, int n2)
{
    int resultado;
    resultado = n1 + n2;

    return resultado;
}

int main()
{
    int primeiroN, segundoN;
    int soma;

    printf("\n==========================\n");
    printf("\tSENAI");
    printf("\n==========================\n");

    printf("Digite o primeiro número:");
    scanf("%d", &primeiroN);

    printf("Digite o segundo número:");
    scanf("%d", &segundoN);

    soma = somar(primeiroN, segundoN);

    printf("\n==========================\n");
    printf("\tSENAI");
    printf("\n==========================\n");
    printf("\nPrimeiro nÃºmero: %d", primeiroN);
    printf("\nSegundo nÃºmero: %d", segundoN);
    printf("\nSoma: %d", soma);

    return 0;
}