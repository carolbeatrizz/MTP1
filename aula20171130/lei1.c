#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

void mostra (char *texto)
{
    printf("%s\n", texto);
}

void lerTexto(char * texto, int tamanho)
{
    FILE*arquivo;
    char * nome[150];
    printf("Qual arquivo deseja abrir? ");
    scanf("%s",texto);
    arquivo=fopen(texto,"r");
    if(arquivo==NULL)
        printf("\nArquivo nao encontrado\n");
    else
    {
		fgets(texto,150,arquivo);
        fscanf(arquivo,"%s",texto);
        fprintf(stdout,"%s",texto);
		fclose(arquivo);
    }
}

void gravaTexto(char * texto, int tamanho)
{
	FILE* arquivo;
	int i;
	arquivo= fopen("meutexto.txt", "a");
	if (arquivo==NULL)
		fprintf(stderr, "Erro na gravacao do arquivo");
	else 
	{
		for (i=0;i<tamanho;i++)
			fputc(texto[i],arquivo);
		fclose(arquivo);
	}
}

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
	gravaTexto(str, 150);
	lerTexto(str,150);
	mostra(str);
	getche();
	return 0;
}


