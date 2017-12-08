
#include <stdio.h>
#include <ctype.h>


int main()
{
char str[150];
int i;
printf("Digite uma frase: ");
fgets(str,150,stdin);
for(int i=0; str[i] != '\0'; i++)
{
if(isalpha(str[i]))
{
str[i]=tolower(str[i]);
}
printf("A frase modificada %s",str);
else
printf("Os dados digitados nao sao uma frase");
}
return 0;
}
