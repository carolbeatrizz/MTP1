#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void compara (int *vetA, int *vetB, int n, int m){
    int i, j;
    for (i=0; i<n; i++)
        for (j=0; j<m; j++)
        {
            if (vetA[i]==vetB[j])
                printf ("%d\n", vetA[i]);
        }
}

int main() 
{
    int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
    int n = sizeof(A)/sizeof(int);
    int B[] = {1, 2, 3, 4, 5, 6, 8, 10, 12, 7, 29};
    int m = sizeof(B)/sizeof(int);
	printf("Os numeros em comum nos dois vetores sao:\n");
    compara (A, B, n, m);
	getche();
    return 0;
}