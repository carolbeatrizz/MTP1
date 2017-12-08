#include <stdio.h>
#include <stdlib.h>
#include <time.h>


const int num=10000;
int main()
{
srandt(time(0));
int n,i;
float vetor[num],soma=0,media;
printf("Digite um numero inteiro e não negativo: ")
scanf("%f",&n);
if (n<0)
prinftf("Digite outro numero!");
for (i=0; i<num; i++)
{
var=rand()%numero+1
vetor[i]=var;
soma=soma+vetor[i];
}
media=soma/10000;
printf("A media dos numeros somados vale: %f",media);
return 0;
}
