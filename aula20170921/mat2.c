#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

void main()
{
int b,c,a;
float angA;
printf("Digite o valor do lado B do triangulo: ");
scanf("%d,&b);
printf("Digite o valor do lado C do triangulo: ");
scanf(%d,&c);
printf("Digite o valor do angulo formado pelos lados digitados,em radianos: ");
scanf(%f,&angA);
a=sqrt(pow(b,2) + pow(c,2) - (2*b*c*cos(angA));
printf("O valor do lado A do triangulo vale: %d",a)
return 0;
}
