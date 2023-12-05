#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cabecalho()
{
    printf("\n==========================\n");
    printf("\tSENAI");
    printf("\n==========================\n");
}

void limpatela()
{
    fflush(stdin);
    system("cls||clear");
}

void mostraridade(int idade){
printf("\nIDADE:%d", idade);

}



int main()
{

    char nome[200];
    int idade;

    cabecalho();

    printf("\nDigite seu nome:");
    gets(nome);
    limpatela();

    cabecalho();

    printf("\nDigite sua idade:");
    scanf("%d", &idade);

    cabecalho();
    
    printf("\nNOME:%s", nome);
    mostraridade(idade);

    return 0;
}