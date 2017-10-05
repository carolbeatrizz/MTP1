#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
using namespace std;

void main()
{
char str[150];
int cont=0;
printf("Digite uma frase: ");
fgets(str,150,stdin);
for(int i=0; str[i] != '\0'; i++)
{
if(isalpha(str))
{
cont ++;
}
printf("O numero de letras digitado e: %d",cont);
else
printf("Os dados digitados nao sao uma letras");
}
return 0;
}
