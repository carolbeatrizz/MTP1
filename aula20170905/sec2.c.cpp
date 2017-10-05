#include <iostream>
#include <stdio.h>
using namespace std;

void main()
{
	int base,altura,area;
	printf("Digite o valor da base do paralelogramo: \n");
	scanf("%d",&base);
	printf("Digite o valor da altura do paralelogramo: \n");
	scanf("%d",&altura);
	area=base*altura;
	printf("A area do paralelogramo e:%d",area);
	system("pause");
}