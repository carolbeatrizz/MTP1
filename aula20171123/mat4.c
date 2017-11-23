#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main() 
{
	Matriz A, B, M;
	int nlA, ncA, nlB, ncB;
	printf("Digite o numero de linhas e o numero de colunas da matriz A: ");
	scanf("%d", &nA);
	scanf("%d", &ncA);
	printf("Digite o numero de linhas e o numero de colunas da matriz B: ");
	scanf("%d", &nlB);
	scanf("%d", &ncB);
	if (ncolA==nlinB)
        {
        A = criarMatriz(nlA, ncA);
        preencherMatriz(A);
        B = criarMatriz(nlB, ncB);
        preencherMatriz(B);
        M = criarMatriz(ncA, nlB);
        M = multiplicaMat(A, B);
        imprimirMatriz(M);
        destruirMatriz(A);
        destruirMatriz(B);
        destruirMatriz(M);
	}
	else
        printf("Nao e possivel realizar a multiplicacao");
	return EXIT_SUCCESS;
}