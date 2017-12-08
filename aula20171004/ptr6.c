#include <stdio.h>
#include <stdlib.h>
#define n 16


int main()
{
	char str[n];
	int  *ponteiro, i=0;
	printf("Digite uma frase de no maximo 16 caracteres: \n");
	fgets( str, n , stdin);
	ponteiro = (int *) &str;
	printf("Frase em decimal:");
	for (i=0; i < sizeof(str)/4 ; i++)
		printf(" %d ", ponteiro[i]);
	printf("\nFrase em hexadecimal:");
	for (i=0; i<sizeof(str)/4; i++)
		printf(" %x ", ponteiro [i]);
	return 0;
}
