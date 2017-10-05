#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

void main()
{
srand(time(0));
int n,flag=0,num1,num2,num3,num4;
printf("Digite o numero de sua escolha: ");
scanf("%d",&n);
if(n%8192 == 0)
{
flag++;
printf("Esse numero e um multiplo de 8192");
}
else
printf("Esse numero nao e um multiplo de 8192");
num1= 1328 + rand()%1360;
printf("Quanto vale 101+ %d",num1);
scanf("%d",&num2);
if (num2==num1+101)
{
flag++;
}
num3= rand()%100;
printf("Digite o valor da multiplicacao de %d por 3: ",num3);
scanf("%d,&num4);
if (num4==num3*3)
printf("Voce somou o total de %d pontos",flag);
system("pause");
}
