MAT1.C
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

void main()
{
float x1,y1,x2,y2,distancia;
printf("Digite valor para coordenada x do ponto A: ");
scanf("%f",&x1);
printf("Digite valor para coordenada y do ponto A: ");
scanf("%f",&y1);
printf("Digite valor para coordenada x do ponto B: ");
scanf("%f",&x2);
printf("Digite valor para coordenada y do ponto B: ");
scanf("%f",&y2);
distancia=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
printf("A distancia entre os pontos A e B vale: %f",distancia);
return 0;
}
