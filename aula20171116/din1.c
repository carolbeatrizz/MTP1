#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

float media(float *vetor, int q)
{
    int i;
    float s=0;
    for (i=0; i<q; i++)
            s=s+vetor[i];
    return s/q;
}

float desvio(float *vetor, int q)
{
    int i;
    float m=0, soma=0.f;
	m= media(vetor,q);
    for (i=0; i<q; i++)
        soma+=pow(vetor[i]-m, 2);
	return sqrt((1.f/(q-1))*soma);
}

int main()
{
    float *v;
    int q, i;
    printf("Quantos numeros deseja entrar: ");
    scanf("%d", &q);
    v=(float *)malloc(q*sizeof(float));
    for (i=0; i<q; i++)
	{
        printf("Elemento [%d]: ", i);
        scanf("%f", &(v[i]));
    }