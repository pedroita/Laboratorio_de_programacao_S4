#include <stdlib.h>
#include <stdio.h>

int mostraSoma(int valor1,int valor2)
{
    printf ("A soma entre %d e %d é : %d", valor1, valor2,valor1+valor2);
}
int main () 
{
    int primeirovalor,segundovalor;
    scanf("%d",&primeirovalor);
    scanf("%d",&segundovalor);
    mostraSoma(primeirovalor,segundovalor);
    return 0;
}