#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void inversao(char *nome)
{
	    int x,tam;
	    tam=strlen(nome);
		for (x=tam-1; x>=0; x--)
		printf("%c",nome[x]);
}

int main () 
{
	int x,tam;
	char nome[30];
	printf("Digite uma palavra: \n");
	gets(nome);
	printf("A escrita inversa da palavra apresentada corresponde a:\n");
	inversao (nome);
	getche();
	return 0;
}