#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float calcularmedia(float n1, float n2)
{
    float resultado;
    resultado = (n1 + n2) / 2;
    return resultado;
}

int main()
{

    float primeiroN, segundoN;
    float media;

   printf("Digite o primeiro número:");
   scanf("%f",&primeiroN);

   printf("Digite o segundo número:");
   scanf("%f",&segundoN);


    media = calcularmedia(primeiroN, segundon);

    printf("\nNúmero: %d", primeiroN);
    
    printf("\nMédia:%f", media);

    return 0;
}