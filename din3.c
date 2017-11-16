#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main()
{
    char str[150];
    printf("Digite um texto para ser transformado em maiusculo, e para sair digite '*': \n");
	fgets(str,150,stdin);
	for(int i=0; str[i] != '\0'; i++)
	{
			if (str[i] == '*')
			{
				return 0;
				break;
			  
			}
			else
			{
				str[i]=toupper(str[i]);
			}
	}
	printf("%s", str);
	getche();
	return 0;
}
