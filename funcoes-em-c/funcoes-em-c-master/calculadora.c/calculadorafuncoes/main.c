#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

//função principal
int main ()
{
    // Declaração das variavel
    int opcao; 
    int valor1, valor2;
    
    do
    {
    // leitura dos dados do usuario
    borda();
    menu();
    borda();
    scanf ("%d",&opcao);
    system ("clear");
    // o switch fara o usuario escolher sua e opção , enquanto o 0 zero nao for precionado o codigo nao sae do loop
    switch (opcao)
    {
    case 1 :
        printf ("Digite o primeiro valor :\n");
        scanf ("%d",&valor1);
        printf ("Digite o segundo valor :\n");
        scanf ("%d",&valor2);
        system ("clear");
        soma(valor1,valor2);
        break;
    case 2:
        printf ("Digite o primeiro valor :\n");
        scanf ("%d",&valor1);
        printf ("Digite o segundo valor :\n");
        scanf ("%d",&valor2);
        system ("clear");
        subtracao(valor1,valor2);
        break;
    case 3:
        printf ("Digite o primeiro valor :\n");
        scanf ("%d",&valor1);
        printf ("Digite o segundo valor :\n");
        scanf ("%d",&valor2);
        system ("clear");
        mutiplicacao(valor1,valor2);
        break;
    case 4:
        printf ("Digite o primeiro valor :\n");
        scanf ("%d",&valor1);
        printf ("Digite o segundo valor :\n");
        scanf ("%d",&valor2);
        system ("clear");
        divisao(valor1,valor2);
        break;
    case 5:
        printf ("Digite um  valor :\n");
        scanf ("%d",&valor1);
        printf("O fatorial do numero %d é %d\n" ,valor1,fatorial(valor1));
    default:
        //system("clear");
        printf("Fim execução\n");
        break;
    }
    }while (opcao!=0);
    
    
}