#include <stdio.h>
#include <stdlib.h>

/* a função irá retornar caracteres */
/*Dia 29*05*2020*/
char retornarLetra()
{
/* A Função retorna a letra*/
    return 'x';
};

int main ()
{
    /* Definição de variavel*/
    char letra;
    letra = retornarLetra();
    printf ("%c",letra);
    return 0 ;
}
