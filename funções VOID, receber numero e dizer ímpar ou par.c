#include <stdio.h>


void mostrarnume(int numero)
{
    if (numero % 2 == 0){
        printf("O NÚMERO É PAR");
}else{
    printf("O NÚMERO É ÍMPAR");
}
}
int main()
{
    int numero;

    printf("DIGITE UM NÚMERO:");
    scanf("%d", &numero);

    mostrarnume(numero);

    return 0;
}