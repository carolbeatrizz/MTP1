#include <iostream>
#include <stdio.h>

int main()
{
int n;
printf("Digite um numero para teste: ");
scanf("%d",&n);
if(n%2==0)
{
printf("O numero e par");
if(n%3==0)
printf("O numero e multiplo de 3");
if(n%7==0)
printf("O numero e multiplo de 7");
}
if(n%2!=0)
{
prinft("O numero e impar");
if(n%5==0)
printf("O numero e multiplo de 5");
}
return 0;
}

