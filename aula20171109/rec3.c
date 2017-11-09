#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int MDC(int u, int v)
{
    if (u==v||v==0)
        return u;
    if (u==0)
        return v;
    if (u%2==0 && v%2!=0)
        return MDC(u/2, v);
    if (u%2!=0 && v%2==0)
        return MDC(u, v/2);
    if (u%2==0 && v%2==0)
        return 2*MDC(u/2, v/2);
    if (u>v)
        return MDC((u-v)/2, v);
    else
        return MDC((v-u)/2, u);
}

struct Fracao
{
	int num, den;
};

struct Fracao somar (struct Fracao ent1, struct Fracao ent2) 
{
    struct Fracao resp;
    resp.num = ent2.den*ent1.num+ent1.den*ent2.num;
    resp.den = ent1.den*ent2.den;
    return resp;
}

int main() 
{
    int mdc;
    struct Fracao entrada1, entrada2, resposta;
    printf("Entre com um numero racional informando o denominador, mesmo que seja 1: \n");
    scanf("%d %d", &entrada1.num, &entrada1.den);
    printf("Entre com outro numero racional informando o denominador, mesmo que seja 1: \n");
    scanf("%d %d", &entrada2.num, &entrada2.den);
    resposta = somar(entrada1, entrada2);
    printf ("Resposta: %d/%d\n" , resposta.num, resposta.den);
    mdc=MDC(resposta.num, resposta.den);
    printf ("Resposta simplificada: %d/%d\n" , resposta.num/mdc, resposta.den/mdc);
	getche();
    return 0;
}
