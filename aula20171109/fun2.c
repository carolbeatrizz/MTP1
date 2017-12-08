#include <stdio.h>
#include <stdlib.h>

void dividir (int *pa, int *pb, int *pquociente, int *presto)
{
    *pquociente = (*pa)/(*pb);
    *presto = (*pa)%(*pb);
}

int main() 
{
    int dividendo, divisor, quociente, resto;
    printf("Entre com o dividendo: \n");
    scanf("%d", &dividendo);
    printf ("Entre com o divisor: \n");
    scanf("%d", &divisor);
    dividir (&dividendo, &divisor, &quociente, &resto);
    printf ("Resposta: %d com resto %d\n" , quociente, resto);
    return 0;
}
