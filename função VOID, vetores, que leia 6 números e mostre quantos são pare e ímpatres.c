#include <stdio.h>
#include <stdlib.h>

void cabecalho(){
    printf("\n\t-------------------------");
    printf("\n\tQUANTOS SÃO PARES E ÍMPARES");
    printf("\n\t--------------------------");
}

void parouimpar(int numero[])
{
   int par = 0;
   int impar = 0;
   
   int i;

   for ( i = 0; i < 6; i++)
   {
    if (numero[i] % 2 == 0)
    {
        par++;
    }
    else
    {
        impar++;
    }
   }
     
    printf("\nQuantidade de pares: %d",par);
    printf("\nQuantidade de ímpares: %d",impar);
}

int main()
{

    int i;
    int numero[6];
    

 for( i=0; i<6; i++)
 {
     printf("\nDigite o número:");
     scanf("%d", &numero[i]);
 }

 
cabecalho();
 parouimpar(numero);

 return 0;
}