#include <stdio.h>

int main ()
{
    int n,i;
    float media;
    int soma;
    fflush(stdin);
    printf ("Digite a quantidade de valores que deseja inserir :\n");
    scanf ("%d",&n);
    int vet[n];
    for (i=0;i<n;i++)
    {
        fflush(stdin);
        printf ("Digite o %d  valor:\n",i);
        scanf ("%d",&vet[i]);

    }
    for (i=0;i<n-1;i++)
    {
        soma+=vet[i];

    }
    media=soma/(n-1);
    printf ("soma eh %d e a media eh %.1f ",soma,media);
}
