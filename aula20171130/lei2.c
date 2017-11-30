#include <stdio.h>
#include <stdlib.h>
#define CHARMAX 150

typedef
    struct Ponto{double x, y;}
	Ponto;

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
        fclose(arquivo);
        fprintf(stdout,"%s",texto);
    }
}

void centroide (char *nome, int x, int y, int num)
{
	int somax=0, somay=0, i, j;
	float centx, centy;
	for (i=0; i<num; i++)
	{
		somax = somax + nome[i].x;
	}
	for (j=0; j<num; j++)
	{
		somay = somay + nome[i].y;
	}
	centx = somax/num;
	centy = somay/num;
	printf ("\nO centroide sera x = %f e y = %f.", centx, centy);
}

int main()
{
    Ponto * conjunto=NULL;
    int num, i;
    char nome[CHARMAX];
    FILE*arquivo=NULL;
    printf("Digite o nome do arquivo: ");
    scanf("%s", &nome);
    printf("Digite o numero de pontos que deseja registrar: ");
    scanf("%d", &num);
    conjunto= (Ponto*)malloc(num*sizeof(Ponto));
    for (i=0; i<num; i++) 
	{
        printf("\nCoordenada x de [%d]: ", i);
        scanf ("%lf", &(conjunto[i].x));
    }
	for (i=0; i<num; i++)
	{
		printf("\nCoordenada y de [%d]: ", i);
        scanf ("%lf", &(conjunto[i].y));
	}
	arquivo=fopen(nome, "wb");
    fwrite(conjunto, sizeof(Ponto), num, arquivo);
    fclose(arquivo);
    free(conjunto);
	lerTexto(nome,150);
	centroide(nome,conjunto[i].y,conjunto[i].x,150);
    return EXIT_SUCCESS;
}
