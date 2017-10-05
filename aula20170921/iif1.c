#include <stdio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

void main ()
{
	int i;
	float n, cont=0, num;
	srand(time(0));
	do{
		cont = 0;
		printf("Digite uma porcentagem (entre 0 e 1).\nPara sair do programa, digite 3.");
		scanf ("%f", &n);
		for (i=1; i<=1000; i++)
		{
			num = (rand()%100);
			if (num < n*100)
				cont = cont++;
		}
		printf("%f.", cont);
	} while (n<=1);
	return 0;
}