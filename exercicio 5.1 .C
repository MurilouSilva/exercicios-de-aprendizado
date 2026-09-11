#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    printf("Calculadora Aritmetica\n\n");
    printf("digite um numero\n");
    float num1;
    scanf ("%f", &num1);
    printf("digite o segundo numero\n\n");
    float num2;
    scanf ("%f", &num2);
    printf("agora, digite um operador(adicao,subtracao,divisao,multiplicacao)\n");
    char operador[20];
    scanf("%s", operador);
    if (strcmp(operador, "adicao") == 0)
    {
        printf("Resultado:%.2f\n", num1 + num2);
    } 
    else if (strcmp(operador, "subtracao") == 0)
    {
        printf("Resultado:%.2f\n", num1 - num2);
    }
    else if (strcmp(operador, "divisao") == 0)
    {
        printf("Resultado:%.2f\n", num1 / num2);
    }
    else if (strcmp(operador, "multiplicacao") == 0)
    {
        printf("Resultado:%.2f\n", num1 * num2);
    }
    else
    {
        printf("erro, operador invalido\n");
    }

    return 0;
}