#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
char nome[5][30], aux[30];
int i = 0;
int j;

for(i = 0; i < 5; i++)
{
printf("Entre com o nome numero %d: ", i + 1);
fgets(nome[i], 30, stdin);
}
for(i=0; i<5; i++)	
for(j=0; j<30; j++)
if(isalpha(nome[i][j]))
{
	nome[i][j]=tolower(nome[i][j]);
}
for(j=1; j<5; j++)
{
	strcpy(aux,nome[j]);
    i = j-1;
	while(i >= 0 && strcmp(nome[i], aux) > 0)
	{
						strcpy(nome[i+1],nome[i]);
						i--;
	}
					strcpy(nome[i+1],aux);
	}
			
				printf("Os nomes em ordem alfabetica sao: \n");
				for(i = 0; i < 5; i++)
				{
					printf(" %s ",nome[i]);
				}
				system("pause");
}
