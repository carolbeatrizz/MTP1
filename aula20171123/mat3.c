#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main()
{
	Matriz A, At, Ad, I;
	int nlin, ncol, l, c;
	printf("Digite o numero de linhas e o numero de colunas: ");
	scanf("%d", &nlin);
	scanf("%d", &ncol);
	if (nlin==ncol)
        {
        A = criarMatriz(nlin, ncol);
        preencherMatriz(A);
        imprimirMatriz(A);
        printf("Digite a linha e a coluna que deseja tirar o menor: ");
        scanf("%d", &l);
        scanf("%d", &c);
        menor(A, l, c);
        cofator (A, l, c);
        comatriz(A);
        Ad= adjunta(A);
        I = inversa (A);
        imprimirMatriz(Ad);
        imprimirMatriz(I);
        destruirMatriz(A);
        destruirMatriz(Ad);
	}
	else
        printf("Digite uma matriz quadrada!");
	return EXIT_SUCCESS;
}