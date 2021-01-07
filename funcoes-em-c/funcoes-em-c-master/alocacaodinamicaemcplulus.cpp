#include <stdio.h>
#include <stdlib.h>
#include <new>
int main ()
{
    // variavel 
    int cont, tamanho;
    //ler dados dos usuario
    printf ("Digite o tamanho : ");
    scanf("%d",&tamanho);
    //criando ponteiro
    int *vetor = new  int (tamanho);
    //imprindo
    for (cont=0;cont<tamanho;cont++)
    {
        vetor[cont]= cont;
        printf("\n%d",vetor[cont]);
    }
    free(vetor);
}