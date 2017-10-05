#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
int vetor[10];
int j, aux, i;
printf("Digite os numeros desejados para o vetor: ");
for(i=0; i<1=0; i++)
{
scanf("Numero %d: ", &vetor[i]);
for(j=0; j<10/2; j++)
{
for(z=9; z>5; z--)
{
aux=vet[j];
vet[j]=vet[z];
vet[z]=aux;
}
}
printf("O vetor reverso consiste em:");
for(i=0; i<10; i++)
printf(" %d ", vetor[i]);
return 0;
}