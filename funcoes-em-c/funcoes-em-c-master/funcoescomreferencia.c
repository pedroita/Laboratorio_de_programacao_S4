#include <stdio.h>
#include <stdlib.h>
/*
    Dia 02.06.2020
*/
/*função retonar mais dez*/
int funcaoretornamaisDez(int numero)
{
    return numero + 10;
}; 
void retornadez(int *numero)
{
    *numero += 10;
}
int main ()
{
    /* Declarando variavel  */
    int a = 5;
    printf ("%d\n",a);
    a = funcaoretornamaisDez(a);
    printf("%d\n",a);
    retornadez(&a);
    printf("%d\n",a);

}