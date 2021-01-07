#include <iostream>
#include <stdlib.h>
#include <string.h>
#define TAM 10

using namespace std;
//imprime pilha
void imprime_vetor(int vetor[TAM],int topo)

{
    int cont;
    cout <<"\n";
    for (cont=0;cont <TAM;cont++)
    {
        cout<<vetor[cont]<<"-";
    }
    cout<<"topo"<<topo;
}
//empilhar os valores 
void pilha_push(int pilha[TAM],int valor,int *topo)
{
    
    if (*topo == TAM -1)
     {
         cout << "pilha cheia";
     }else
     {
         *topo = *topo+1;
         pilha[*topo]=valor;
     }
}
//desempilhar os valores
void pilha_pop(int pilha[TAM],int *topo)
{
    if (*topo==-1)
    {
        cout <<"pilha vazia";
    }else
    {
        cout << "Valor Removido"<<pilha[*topo];
        pilha[*topo]= 0;
        *topo = *topo -1;
    }
}
 int main ()
 {
     int pilha[TAM]= {0,0,0,0,0,0,0,0,0,0};
     int topo = -1;
     imprime_vetor(pilha,topo);
     pilha_push(pilha,5,&topo);
     imprime_vetor(pilha,topo);
     pilha_push(pilha,8,&topo);
     imprime_vetor(pilha,topo);
     pilha_push(pilha,9,&topo);
     imprime_vetor(pilha,topo);
     pilha_push(pilha,4,&topo);
     imprime_vetor(pilha,topo);
     pilha_push(pilha,10,&topo);
     imprime_vetor(pilha,topo);
     pilha_push(pilha,8,&topo);
     imprime_vetor(pilha,topo);
     pilha_push(pilha,20,&topo);
     imprime_vetor(pilha,topo);
     pilha_push(pilha,29,&topo);
     imprime_vetor(pilha,topo);
     pilha_push(pilha,55,&topo);
     imprime_vetor(pilha,topo);
     pilha_push(pilha,55,&topo);
     imprime_vetor(pilha,topo);
     pilha_push(pilha,90,&topo);
     imprime_vetor(pilha,topo);
     pilha_pop(pilha,&topo);
     imprime_vetor(pilha,topo);
     pilha_pop(pilha,&topo);
     imprime_vetor(pilha,topo);
     pilha_pop(pilha,&topo);
     imprime_vetor(pilha,topo);
     pilha_push(pilha,100,&topo);
     imprime_vetor(pilha,topo);
 }