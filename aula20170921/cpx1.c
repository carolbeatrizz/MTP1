#include <stdio.h>
#include <complex.h>
int main()
{
    double complex Z1, Z2, soma;
    double rZ1, iZ1, rZ2, iZ2;
    printf("Real de Z1: ");
    scanf("%lf", &rZ1);
    printf("Imaginario de Z1: ");
    scanf("%lf", &iZ1);
    printf("Real de Z2: \n");
    scanf("%lf", &rZ2);
    printf("Imaginario de Z2: ");
    scanf("%lf", &iZ2);
    Z1=rZ1+iZ1*I;
    Z2=rZ2+iZ2*I;
    soma= Z1+Z2;
    printf("Soma: %lf + %lf*i\n", creal(soma), cimag(soma));
    return 0;
}
