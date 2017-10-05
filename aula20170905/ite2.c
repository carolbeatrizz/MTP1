#include <iostream>
#include <stdio.h>
using namespace std;

void main ()
{
    int base, expoente, i, resultado;
    printf("Insira um numero inteiro para ser a base: ");
    scanf("%d",&base);
    printf("Insira um numero inteiro para ser o expoente: ");
    scanf("%d",&expoente);
    resultado=base;
    for (i=1;i<=expoente;i++)
    {
        base=base*base;
    }
    printf("O resultado da potencia vale:%base",&base)
    system("pause");
}