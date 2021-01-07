#include <stdio.h>
#include <stdlib.h>
#include   "funcoes.h"
//funcao borda
void borda()
{
    printf ("\n\t__________________________________\n");
};
//funcao menu
void menu ()
{
    printf ("\tBEM-VINDO\n");
    printf ("\tDigite uma das opções abaixo:\n");
    printf ("\t1.Soma\n");
    printf ("\t2.Subtrair\n");
    printf ("\t3.Multiplicar\n");
    printf ("\t4.Dividir\n");
    printf ("\t5.Fatorial\n");
    printf ("\t0. Sair");
};
// funcao soma

int soma (int n1,int n2)
{
    printf (" A soma dos Valores %d e %d é : %d",n1,n2,n1+n2);
};

// função subtração
/*a Função irá subtrair o valor do primeiro numero pelo segundo
havendo valor menor que zero a função retonar erro.
*/
int subtracao(int n1,int n2)
{
    if (n1 > 0 && n2>0)
    {
         printf (" A subtração  dos Valores %d por %d é : %d",n1,n2,n1-n2);
    }else 
    {
        printf ("Alguns dos valores está errado, digite novamente");
    }
};

/*
    A função ira mutiplicar os valores, não importando a ordem.
*/
int mutiplicacao(int n1,int n2)
{
   printf (" A mutiplicação  dos Valores %d por %d é : %d",n1,n2,n1*n2);
};
/*
    A função irá dividir os valores seguindo a ordem matematica, onde nao pode haver divisão por zero;
*/
float divisao(float n1 , float n2 )
{
      if (n1 > 0 && n2>0)
    {
         printf (" A divisão  do Valor %2.f por %2.f é : %.2f",n1,n2,n1/n2);
    }else 
    {
        printf ("Não é possivel dividir valores por zero, digite novamente ");
    }
};
/*
    realizar fatorial de numero
*/
int fatorial(int fat)
{
    int f=1;
    while( fat > 0 )
        f *= fat--;

    return f;
};