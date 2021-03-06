#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float delta(int a, int b, int c)
{
    float d;
    d=b*b-(4*a*c);
    return d;
}

void raiz (float d, int a, int b, int c)
{
    float r1, r2;
    if (d>0)
	{
        r1=(-b+sqrt(d))/(2.0*a);
        r2=(-b-sqrt(d))/(2.0*a);
        printf("Raiz 1: %f\n", r1);
        printf("Raiz 2: %f\n", r2);
    }
    if (d==0)
	{
        r1=-b/(2.0*a);
        r2=-b/(2.0*a);
        printf("Raiz 1: %f\n", r1);
        printf("Raiz 2: %f\n", r2);
    }
   
}

void raizcomp (float d,int a, int b,int c)
{
	float r1r,r1i,r2r,r2i;
	if (d<0)
	{
		r1r=(-b/(2*a));
		r2r=(-b/(2*a));
		r1i= ((sqrt(-d)/(2*a)));
		r2i= ((-sqrt(-d)/(2*a)));
		printf("\nParte real da raiz 1: %f e a parte imaginaria: %f", r1r, r1i);
		printf("\nParte real da raiz 1: %f e a parte imaginaria: %f", r2r, r2i);
	}
}
int main()
{
   int a, b, c;
   float d;
   printf ("Digite os valores de a, b e c da equacao quadratica: \n");
   scanf ("%d %d %d", &a, &b, &c);
   d=delta(a,b,c);
   if( d>0 || d==0)
   {
	   d=delta(a, b, c);
	   raiz (d, a, b, c);
   }
   if (d<0)
   {
	   d=delta(a,b,c);
	   raizcomp(d,a,b,c);
   }
   return 0;
}
