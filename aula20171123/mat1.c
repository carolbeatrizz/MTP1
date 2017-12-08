#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main() 
{
	Matriz A, At, Mat;
	int nlin, ncol, lin, col;
	printf("Digite o numero de linhas e o numero de colunas: ");
	scanf("%d", &nlin);
	scanf("%d", &ncol);
	if (nlin==ncol)
        {
        A = criarMatriz(nlin, ncol);
        preencherMatriz(A);
        imprimirMatriz(A);
        printf("Digite a linha e a coluna que deseja tirar o menor: ");
        scanf("%d", &lin);
        scanf("%d", &col);
        menor(A, lin, col);
        cofator (A, lin, col);
        comatriz(A);
        Mat = adjunta(A);
        imprimirMatriz(Mat);
        destruirMatriz(A);
        destruirMatriz(Mat);
	}
	else
        printf("Digite uma matriz quadrada!");
	return 0;
}
