#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

double main() 
{
	Matriz A, At;
	int nlin, ncol, I;
	printf("Entre com o numero de linhas e o numero de colunas: ");
	scanf("%d", &nlin);
	scanf("%d", &ncol);
	if (nlin==ncol)
        {
        A = criarMatriz(nlin, ncol);
        preencherMatriz(A);
        imprimirMatriz(A);
        I = determinante(A);
        printf("%d", I);
        destruirMatriz(A);
	}
	else
        printf("A matriz nao e' quadrada!");
	return EXIT_SUCCESS;
}