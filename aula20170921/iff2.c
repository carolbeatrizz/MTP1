#include <stdio.h>
#include <float.h>
#include <stdint.h>
int main ()
{
    float soma=0, inversao;  
    int numero, i=0;
    printf("Insira um numero inteiro para o calculo: ");
    scanf("%d",&numero);
    inversao=1.0/numero;
    for (i;i<729;i++)
    {
        soma=soma+inversao;
    }
    printf("O resultado vale: %.15f",soma);
    return 0;
}