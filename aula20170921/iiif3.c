#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	double fat, n;
	printf("Insira um valor para o qual deseja calcular seu fatorial: ");
	scanf("%lf", &n);
        if (n <= 20)
        {
	for(fat = 1; n > 1; n = n - 1)
		fat = fat * n;
	printf("\nFatorial calculado: %lf", fat);
        }
        else
        printf("Dados invalidos!");
	system("pause");
}