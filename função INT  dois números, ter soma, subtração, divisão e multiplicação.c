#include<stdio.h>
#include<stdlib.h>

void cabecalho (){
    printf("\n---------------------------");
    printf("\n\tSENAI");
    printf("\n---------------------------");
}


int calculosoma(int n1, int n2){
    int resultado;
    resultado= n1+n2;
    return (resultado);
}

int calculosubtracao(int n1, int n2){
    int resultado;
    resultado= n1-n2;
    return (resultado);
}

int calculomultiplicacao ( int n1, int n2){
    int resultado;
    resultado= n1*n2;
    return (resultado);
}

float calculodivisao ( float n1, float n2){
    float resultado;
    resultado= n1/n2;
    return (resultado);
}

int main(){

int n1, n2;
int soma=0;
int subtracao=0;
int multiplicacao=0;
float divisao =0;

cabecalho();




 printf("\nDigite o primeiro número:");
 scanf("%d",&n1);

 printf("\nDigite o segundo número:");
 scanf("%d",&n2);

  soma = calculosoma (n1,n2);
  subtracao = calculosubtracao (n1, n2);
  multiplicacao = calculomultiplicacao (n1,n2);
  divisao = calculodivisao (n1,n2);

 printf("\nO número: %d", n1);
 printf("\nO número: %d", n2);
 printf("\nA soma:%d", soma);
 printf("\nA subtração: %d", subtracao);
 printf("\nA multiplicação: %d", multiplicacao);
 printf("\nA Divisão: %f", divisao);















    return 0;
}