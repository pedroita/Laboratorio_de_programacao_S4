#include <stdio.h>

int main ()
{

    int x=5,n,i;
    printf ("Digite um numero");
    scanf ("%d",&n);
   // i=0;
    /*do{
        printf ("%d-",i);
        i+=1;
    }while(i<n);
*/


  /*  x %2 == 0 ? printf("o numero 10 eh  par ",x): printf ("Numero %d eh impar",x);
    */
    for (i=0;i<n;i=i+1){
        printf ("%d-",i);
    }

    return 0;
}
