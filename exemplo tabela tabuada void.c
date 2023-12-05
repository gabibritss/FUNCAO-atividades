#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tabela(){

printf("============================");
printf("\tTABUADA");
}

void  mostrartabuada(int n1){
int i;

for(i=0;i<10;i++){
    printf("%d X %d = %d\n", n1, i, n1*i);
 }
}

int main(){

 int numero;

 tabela();
 printf("Digite um número:");
 scanf("%d",&numero);
 mostrartabuada();                                                                                                
 

    return 0;
}