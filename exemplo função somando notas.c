#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cabecalho()
{
    printf("\n==========================\n");
    printf("\tSENAI");
    printf("\n==========================\n");
}

 int somar (int n1,int n2){
    int resultado;
    resultado= n1+n2;

    return resultado;
 }

int main()
{
    int n1,n2;
    int soma;

    cabecalho();

  printf("Digite o primeiro n�mero:");
  scanf("%d", &n1);

  printf("Digite o segundo n�mero:");
  scanf("%d", &n2);
  
  soma= somar (n1,n2);

  cabecalho();
  
  printf("\nPrimeiro número: %d",n1);
  printf("\nSegundo número: %d",n2);
  printf("\nSoma: %d",soma);


    return 0;
}