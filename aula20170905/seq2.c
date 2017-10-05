#include <iostream>
#include <stdio.h>
using namespace std;

void main()
{
int a,b,area;
printf("Digite o valor da base do triangulo: ");
scanf("%d,&b);
printf("Digite o valor da altura do triangulo: ");
scanf("%d,&a);
area=(b*a)/2;
printf("O valor da area do triangulo vale:%d",area);
system("pause");
}