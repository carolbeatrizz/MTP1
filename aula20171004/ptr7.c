#include <stdio.h>
#include <stdlib.h>
#define n 4


int main()
{
	char *ponteiro;
	int vet[n] = {0}, i=0;
	printf("Digite quatro numeros para preencher o vetor:");
	for (i =0; i<4; i++)
	{
		printf("\nNumero para posicao %d do vetor: ", i+1);
		scanf("%d", &vet[i]);
	}
	ponteiro = (char *) &vet;
	printf("O caractere equivalente vale:");
	for (i=0; i < sizeof(vet) ; i++)
	{
		printf(" %c ", ponteiro[i]);
	}
	return 0;
}
