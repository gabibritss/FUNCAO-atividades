#include<stdio.h>



float convertercent (float numero){
    float resultado;
    resultado = numero *100;
    return (resultado);
}
int main (){
    int numero;
    float metro;

    printf("Digite um número:");
    scanf("%d" ,&numero);

    metro = convertercent (numero);

    printf(" Centimetros: %.2f cm", metro);


return 0;
}