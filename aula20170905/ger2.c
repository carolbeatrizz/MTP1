

#include <stdio.h>


int main()
{
int n,flag=0;
printf("Digite um numero para realizar o teste");
scanf("%d",n);
for(int i=1,i<n,i++)
{
flag=flag+i;
}
if (flag==n)
printf("O numero e perfeito");
else
printf("O numero nao e perfeito");
return 0;
}
