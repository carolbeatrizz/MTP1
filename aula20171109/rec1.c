#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int soma(int *vetA, int N)
{
    if (N==0)
        return vetA[0];
    else
        return vetA[N]+ soma (vetA, N-1);
}

int main()
{
    int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29,31};
    int N = sizeof(A)/sizeof(int);
	printf("A soma dos parametros inseridos no vetor vale: \n");
    printf("%d", soma(A,N-1));
	getche();
    return 0;
}