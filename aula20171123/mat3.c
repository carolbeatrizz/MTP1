#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "matriz.h"

int main() 
{
	Matriz A, At, COMAT;
	int nlin, ncol,i,j, cof,det1,det2,mult;
	printf("Entre com o numero de linhas e o numero de colunas: ");
	if( nlin=ncol)
	{
	scanf("%d", &nlin); 
	scanf("%d", &ncol);
	A = criarMatriz(nlin, ncol);
	preencherMatriz(A);
	menor(A,nlin,ncol);
	for ( i=0; i<=nlin ;i++)
	{
		for ( j=0; j<=ncol; j++)
		{
			cof = cofator(A,i,j);
			COMAT[i][j]= cof;
		}
	}
    At= transposta(COMAT);
	det1= determinante(A);
	det2= 1/(det1);
	mult= multiplicar(det1,A);
	imprimirMatriz(mult);
    destruirMatriz(mult);
	}
	else
		printf("Digite os valores de uma matriz quadrada");
	return EXIT_SUCCESS;
}