#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main() 
{
	Matriz A, B, Inv, Mult;
	int nlinA, ncolA, nlinB, ncolB;
	printf("Digite o numero de linhas e o numero de colunas da matriz A: ");
	scanf("%d", &nlinA);
	scanf("%d", &ncolA);
    A = criarMatriz(nlinA, ncolA);
    preencherMatriz(A);
	printf("Digite a matriz de coeficientes B: ");
	scanf("%d", &nlinB);
	scanf("%d", &ncolB);
	B = criarMatriz(nlinB, ncolB);
    preencherMatriz(B);
    Inv = criarMatriz(nlinA, ncolA);
    Inv = inversa(A);
    Mult = criarMatriz(nlinB, ncolB);
    Mult = multiplicaMat(Inv, B);
    imprimirMatriz(Mult);
    destruirMatriz(A);
    destruirMatriz(B);
    destruirMatriz(Inv);
    destruirMatriz(Mult);
	return 0;
}
