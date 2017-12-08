#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i=0;
	unsigned char *ponteiro;
	unsigned int variavel=0xFACA8421;
	printf (" Variavel: ");
	printf("Endereço: %p e valor: %x\n", &variavel, variavel);
	ponteiro = (unsigned char *) &variavel;
	for (i= 0; i < sizeof (variavel); i++) 
	{
     printf ("Em: %p | \n" , ponteiro);
     printf ("Contem: %u ou %X ou %c ", ponteiro[i], ponteiro[i], ponteiro[i]);
	}
	return 0;
}
