#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i=0,flag=0;
	int vetor[] = {0x0F,0xFF,0xFFFF,0xFFFFFF,0x80000001,0xFFFFFFFF};
	unsigned char *ponteiro;
	ponteiro = (unsigned char*) &vetor;
	for (i=0; i< sizeof(vetor);i++)
	{
		if (ponteiro[i]!=0x0)
			flag ++;
	}
	printf("O numero de bytes com pelo menos um bit igual a 1 vale: %d\n", flag);
	return 0;
}

