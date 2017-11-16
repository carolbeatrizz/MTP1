#include <stdio.h>#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void preenche(float * elemento) 
{
  scanf("%f", elemento);
}

void imprime(float **matriz, int N, int M)
{
  int i, j;
  printf("Matriz inserida pelo usuario:\n", N, M);
  for(i = 0; i < N; i++)
    for(j = 0; j < M; j++)
      printf("%g%c", matriz[i][j], (j == M-1)? '\n':'\t');
}

void transposta (float **matriz,int N, int M)
{
    int i, j;
    for(j = 0; j < M; j++)
        for(i = 0; i < N; i++)
            printf("%g%c", matriz[i][j], (i == N-1)? '\n':'\t');
}

int main() 
{
  int i, j;
  int N, M;
  float **matriz;
  printf("Entre com a ordem da matriz, no formato 'NxM': ");
  scanf("%dx%d", &N, &M);
  matriz =(float **) calloc(N,sizeof(float*));
  for(i = 0; i < N; i++)
  {
	matriz[i] = (float *)calloc(M,sizeof(float));
    for(j = 0; j < M; j++) 
	{
      printf("Elemento (%d,%d): ", i, j);
      preenche(&matriz[i][j]);
    }
  }
  imprime(matriz,N,M);
  printf("A matriz transposta:\n");
  transposta(matriz,N,M);
  for(i = 0; i < N; i++)
  {
	free(matriz[i]);
  }
  free(matriz);
  getche();
  return 0;
}