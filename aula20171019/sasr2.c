#include <stdio.h>
#include <stdlib.h>

void par(int n)
{
    int i;
    printf ("\nNumeros pares: ");
    for (i=1; i<=n; i++)
        if (i%2==0)
        printf ("%d ", i);
}

void impar(int n)
{
    int i;
    printf ("\nNumeros impares: ");
    for (i=1; i<=n; i++)
        if (i%2!=0)
        printf ("%d ", i);
}

int main() {
    int n,a;
    printf("Digite um numero inteiro: ");
	scanf("%d", &n);
	printf("Digite 1 para ver os numeros pares e dois para ver os numeros impares/n");
	scanf("%d", &a);
	if(a==1)
		par(n);
	if(a==2)
		impar(n);
	return 0;
}
