#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i=0,flag=0;
	int vet[] = {0,1,2,4,8,16,1025};
	unsigned char *ponteiro;
	ponteiro = (unsigned char*) &vet;
	for (i=0; i < sizeof(vet); i++)
	{
		if (ponteiro[i] == 0x00)
			flag++;
	}
	printf("O total de bytes iguais a 0's encontrados: %d\n", flag);
	return 0;
}
