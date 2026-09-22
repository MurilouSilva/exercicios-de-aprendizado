//Faça um programa em C que leia um número inteiro e escreva os números de 0 (inclusive)
//até o número digitado. Se o usuário digitar um número < 0, escrever “Número inválido”.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("---------------------------------\n");
    printf("Digite o numero que seseja contar\n");
    printf("---------------------------------\n");
    int numero;
    scanf("%d", &numero);
    if (numero == 0)
    {
        printf("---------------\n");
        printf("Numero Invalido\n");
        printf("---------------\n");
    }
    else{
        for (int indice = 0; indice <= numero; indice++)
    {
        printf("%d\n", indice);
    }
    }
    
    
    return 0;
}
