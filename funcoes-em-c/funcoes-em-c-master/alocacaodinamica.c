#include <stdio.h>
#include <stdlib.h>


int * alocavetor(int tamanho)
{
    int *aux;
    aux = (int *)malloc(tamanho * sizeof(int));
    return aux;
}

int main ()
{
    //variavel
    int *vetor, tamanho, cont;
    // tamanho do vetor
    printf("Digite o tamanho do seu vetor");    
    scanf("%d",&tamanho);
    //passagem do tamanho do vetor pra função vetor
    vetor = alocavetor(tamanho);
    // solicita o valor da posições
    for (cont = 0; cont < tamanho;cont++)
    {
        printf ("Digite o valor para a posição [%d]\n", cont);
        scanf ("%d",&vetor[cont]);
    }
    
    /*vetor[0]=5;
    vetor[1]=4;
    vetor[2]= 3;
    */
    // imprimi vetor com as posiçoes
    for (cont=0;cont<tamanho;cont++)
    {
        printf("o na posição [%d] é [%d]\n",cont,vetor[cont]);
    }
    return 0;
}
