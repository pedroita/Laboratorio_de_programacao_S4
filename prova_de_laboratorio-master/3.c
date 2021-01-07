#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#define TAM 100
/*
    função arranjo recebe o valor do vetor, o limite inferior como m e superior n,
    uso um for para mostrar isso.
*/
void arranjo(int *vetor,int m,int n)
{
  int i;
for (i=m;i<n-1;i++)
    {
        printf("\nOs valores desejados :%d\n",vetor[i]);
    }
}

int main ()
{
    //criar numeros aleatorio
    srand ( time(NULL) );
    //var local
    int i,n,m;
    int vet[TAM];
    for (i=1;i<TAM;i++)
    {
        // estamos dividindo os valores aleatorios por 100 e somando mais um
        vet[i]=1+rand()%100;
    }
    for (i=1;i<TAM;i++)
    {
        printf ("%d-",vet[i]);
    }
    //solicita do usuario o intervalo desejado.
    printf ("\nDigite o intervalor que voce deseja que seja impresso:\n");
    scanf ("%d%d",&m,&n);
    arranjo(vet,m,n);
}
