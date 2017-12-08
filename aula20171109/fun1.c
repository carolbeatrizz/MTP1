#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

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
    struct Fracao entrada1, entrada2, resposta;
    printf("Entre com um numero racional informando o numerador e depois o denominador, mesmo que seja 1: \n");
    scanf("%d %d", &entrada1.num, &entrada1.den);
    printf("Entre com outro numero racional informando numerador e depois o denominador, mesmo que seja 1: \n");
    scanf("%d %d", &entrada2.num, &entrada2.den);
    resposta = somar(entrada1, entrada2);
    printf ("Resposta: %d/%d\n" , resposta.num, resposta.den);
	getche();
    return 0;
}
