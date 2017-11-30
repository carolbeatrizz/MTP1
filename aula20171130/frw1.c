#include <stdio.h>
#include <stdlib.h>
#define MAXCHAR 150

void captura (char * nome, int * idade, float * altura)
{
    fprintf(stdout,"Digite o nome: ");
    fgets(nome, MAXCHAR, stdin);
    fprintf(stdout,"Digite com a idade: ");
    fscanf(stdin,"%d", idade);
    fprintf(stdout,"Digite a altura: ");
    fscanf(stdin,"%f", altura);
}

void mostra (char *nome, int idade, float altura)
{
    printf("%s%d anos, %g metros.\n", nome, idade, altura);
}

void gravar(char * nome_arquivo)
{
    char nome[MAXCHAR];
    int idade;
    float altura;
    FILE *arquivo=NULL;
    arquivo=fopen(nome_arquivo, "w");
    if (arquivo==NULL)
	{
        fprintf(stderr, "Ha um problema na gravacao!!!\n");
        exit(EXIT_FAILURE);
    }
    captura(nome, &idade, &altura);
    fprintf(arquivo, "%s%d\n%f\n", nome, idade, altura);
    fclose(arquivo);
}

void recuperar(char * nome_arquivo)
{
    char nome[MAXCHAR];
    int idade;
    float altura;
    FILE *arquivo=NULL;
    arquivo=fopen(nome_arquivo, "r");
    if (arquivo==NULL)
	{
        fprintf(stderr, "O arquivo nao existe!!!\n");
        exit(EXIT_FAILURE);
    }
    fgets(nome, MAXCHAR, arquivo);
    fscanf(arquivo, "%d", &idade);
    fscanf(arquivo, "%f", &altura);
    mostra(nome, idade, altura);
    fclose(arquivo);
}

int menu(char * nome_arquivo)
{
    int choice; 
	char c;
    printf ("1- Tecle para gravar\n");
    printf ("2- Tecle para recuperar\n");
    printf ("3 - Tecle para sair\n");
    printf ("\nEntre com sua opcao: ");
    scanf("%d", &choice); 
	while (! (c= getchar()));
    if (choice==1) 
		gravar(nome_arquivo);
    else if (choice==2) 
		recuperar(nome_arquivo);
    return choice;
}

int main()
{
    char nome_arquivo [MAXCHAR];
    printf("Entre com o arquivo: ");
    scanf("%s", nome_arquivo);
    while (menu(nome_arquivo) !=3);
    return EXIT_SUCCESS;
}