#include <iostream>
#include <stdio.h>
using namespace std;

void main()
{
float a,b,c,d,e,media;
printf("Digite as notas do aluno para calculo da media: \n");
printf("Nota 1: ");
scanf("%f",&a);
printf("Nota 2: ");
scanf("%f",&b);
printf("Nota 3: ");
scanf("%f",&c);
printf("Nota 4: ");
scanf("%f",&d);
printf("Nota 5: ");
scanf("%f",&e);
media=(2*a)+(2*b)+(2*c)+(3*d)+(5*d)/14;
scanf("A media das notas do aluno vale: %f",media);
system("pause");
}