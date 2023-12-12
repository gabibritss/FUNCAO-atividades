#include <stdio.h>
#include <stdlib.h>

void cabecalho()
{
    printf("\n---------------------------");
    printf("\n\tCONSULTAR O IMC");
    printf("\n---------------------------");
}

float calculoimc(float n1, float n2)
{
    float resultado;
    resultado = n1 / (n2 * n2);
    return (resultado);
}

void mensagem(float imc)
{

    if (imc < 18.5)
    {
        printf("Abaixo do peso ");
        printf("ORIENTA��O ---> consulte um nutricionista");
    }

    else if (imc >= 18.5 && imc < 25)
    {
        printf("Peso est� normal");
        printf("ORIENTA��O ---> mantenha h�bitos saud�veis");
    }

    else if (imc >= 25 && imc < 30)
    {
        printf("Com sobrepeso");
        printf("ORIENTA��O ---> considere uma dieta balanceada e atividade fis�ca");
    }

    else if (imc >= 30 && imc < 35)
    {
        printf("Obesidade grau 1 ");
        printf("ORIENTA��O ---> procure a orienta��o de um profissional da ar�a da sa�de");
    }

    else if (imc >= 35 && imc < 40)
    {
        printf("Obesidade grau 2");
        printf("ORIENTA��O ---> consulte um m�dico para avalia��o e orienta��o");
    }

    else if (imc >= 40)
    {
        printf("Obesidade grau 3");
        printf("ORIENTA��O ---> busque assist�ncia m�dica imediatamente");
    }
}

int main()
{
    float peso;
    float altura;
    float imc;

    cabecalho();

    printf("\nDigite o seu peso:");
    scanf("%f", &peso);

    printf("\nDigite sua altura:");
    scanf("%f", &altura);

    imc = calculoimc(peso, altura);

    cabecalho();

    printf("\nPeso:%.2f", peso);
    printf("\nAltura:%.2f", altura);
    printf("\nIMC:%.2f\n", imc);
    mensagem(imc);

    return 0;
}