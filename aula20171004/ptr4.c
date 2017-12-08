#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a ,b , soma;
	unsigned char *ponteiro;
	printf("Digite dois numeros reais: \n");
	printf("Primeiro: ");
	scanf("%d", &a);
	printf("Segundo: ");
	scanf(" %d ",&b);
	printf("O endereco do primeiro numero: %p e seu conteudo: %d", &a, a);
	printf("O endereco do segundo numero: %p e seu conteudo: %d", &b, b);
	soma = a + b;
	printf("O endereco da soma: %p e seu conteudo: %d", &soma, soma);
	return 0;
}

