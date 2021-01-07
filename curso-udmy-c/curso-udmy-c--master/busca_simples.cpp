#include <stdio.h>
#include <stdlib.h>
#define TAM 10

using namespace std ;
/* DIA 22.06.2020 */
/* ALGORITIMO IRA REALIAZAR UMA BUSCA SEGUNDO DADOS DOS USUARIO */
//funcao de busca simples

int busca_simples(int vetor[TAM],int valorprocurado,int *posicaoencotrada)
{
    bool valorfoiencontrado;
    int cont ;
    for (cont =0;cont <TAM;cont++)
    {
        if (vetor[cont]==valorprocurado)
        {
            valorfoiencontrado =  true;
            *posicaoencotrada = cont;
        }
    }
    if( valorfoiencontrado){
        return 1;
    }else{
        return -1;
    }
}
//impresao do vetor
void imprime (int vetor[TAM])
{
    int cont;
   for (cont=0;cont<TAM;cont++)
   {
        printf (" %d-",vetor[cont]);
   }
   printf ("\n");
}

int main ()
{
    int vetor[TAM] = {10,25,32,99,100,95,55,87,44};
    int valor_procurado;
    int posicao_encontrada,cont;
    imprime(vetor);
    printf ("Qual numero você deseja encotra\n");
    scanf ("%d",&valor_procurado);
    if (busca_simples(vetor,valor_procurado,&posicao_encontrada)==1)
    {
        printf ("O valor foi encotrado na posicão %d \n",posicao_encontrada);
    }else
        {
            printf ("O valor não foi encotrado");
        }   
    
}