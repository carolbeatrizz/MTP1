#include <stdio.h>
#include <complex.h>
int main()
{
    double complex Z1, Z2;
    double rZ1, iZ1, mult;
    printf("Parte real de Z1: ");
    scanf("%lf",&rZ1);
    printf("Parte imaginaria de Z1: ");
    scanf("%lf",&iZ1);
    Z1=rZ1 + iZ1*I;
    Z2=conj(Z1);
    mult= rZ1*creal(Z2) + iZ1*cimag(Z2);
    printf("O resultado e: %lf + %lf*i", creal(mult), cimag(mult));
    return 0;
}