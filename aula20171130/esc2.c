#include <stdio.h>
#include <stdlib.h>
#define CHARMAX 150

typedef
    struct Ponto{double x, y;}
	Ponto;

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
    return EXIT_SUCCESS;
}