#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 1000


int main()
{
	int vet[n], i=0, num, flag=0;
	srand(time(0));
	unsigned char *ponteiro;
	for (i=0; i < n; i++)
	{
		vet[i] = rand ();
	}
	ponteiro = (unsigned char*) &vet;
	printf("Caro usuario,digite um numero entre 0 e 255: ");
	scanf("%d", &num);
	if (num<0 || num> 255)
		printf("Digite outro numero!");
	printf("Em %p, temos:", ponteiro);
	for (i=0; i < n; i++)
	{
		if (ponteiro[i]==num)
		{
			flag++;
			printf(" %d",ponteiro[i]);
		}
	}
	printf(" \n %d sao bytes iguais a %d , entre o endereco %p e o endereco %p na memoria\n ", flag, num, ponteiro, ponteiro+sizeof(vet) );
	return 0;}


