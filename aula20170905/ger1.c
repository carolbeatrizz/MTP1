
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
int n,flag;
printf("Digite um numero para verificar se ele e primo ou nao);
scanf("%d",n);
for (int i,i<n,i++)
{
if (n%i==0)
{
flag++;
break;
}
if(flag==0)
printf("O numero e primo");
else
printf("O numero nao e primo");
system("pause");
}
