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

   printf("Digite o primeiro n�mero:");
   scanf("%f",&primeiroN);

   printf("Digite o segundo n�mero:");
   scanf("%f",&segundoN);


    media = calcularmedia(primeiroN, segundon);

    printf("\nN�mero: %d", primeiroN);
    
    printf("\nM�dia:%f", media);

    return 0;
}