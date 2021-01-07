#include <stdio.h>
#define TAM 10
//função imprimir
void imprimeVetor(int vetor[]){
	int i;
	printf("\n");
	for(i=0;i<TAM;i++)
	{
		printf("%d-",vetor[i]);
	}
}
/*

A função quick_sort recebe o tamanho do vetor, o inicio é 0, e o fim é tam, determinei o fim do vetor como tamanho dele,
dentro dele temos um pivo que sera nosso aux que irá caminhar para meio, na primeira interação, ele será responsavel por 
caminha no vetor e ordernar os  valores.
*/
void quick_sort(int vetor[TAM], int inicio, int fim){

    int pivo, esq, dir, meio, aux;

    //Limites da esquerda e direita da regi�o analisada
    esq = inicio;
    dir = fim;

    //Ajustando auxiliares do centro
    meio =  (int) ((esq + dir) / 2);
    pivo = vetor[meio];


    while(dir > esq){

        while(vetor[esq] < pivo){
            esq = esq + 1;
        }

        while(vetor[dir] > pivo){
            dir = dir - 1;
        }

        if(esq <= dir){

            //Realiza uma troca
            aux = vetor[esq];
            vetor[esq] = vetor[dir];
            vetor[dir] = aux;

            //Faz os limites laterais caminharem para o centro
            esq = esq + 1;
            dir = dir - 1;

        }

        imprimeVetor(vetor);

    }

    //Recurs�o para continuar ordenando
    if(inicio < dir){
        quick_sort(vetor, inicio, dir);
    }

     //Recurs�o para continuar ordenando
    if(esq < fim){
         quick_sort(vetor, esq, fim);
    }

}

int main(){

    int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};

    quick_sort(vetor, 0, TAM);
    imprimeVetor(vetor);
    return 0;
}