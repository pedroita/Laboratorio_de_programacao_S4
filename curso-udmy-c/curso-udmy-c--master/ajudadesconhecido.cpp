#include <stdio.h>

#include <stdlib.h>

//#include <locale.h>



int main(){

     // escrever com acento

     //setlocale(LC_ALL,"");

     printf("Olá \n");
 char letra = 's';
    

    printf ("o valor de letra c = %c\n" , letra);
    
     scanf  ("%c",&letra );
     fflush (stdin);
     printf ("\n o valor de b mudou para  = %c\n" , letra );






     //lendo valor inteiro
     int a = 50;

     printf ("\no valor de a e = %d\n" , a );

     scanf  ("%d" , &a );

     printf ("\n o valor de a mudou para  = %d\n" , a );

    fflush(stdin);

    //lendo valor quebrado

     float b = 5.5;

     printf ("o valor de b e = %.2f\n" , b );

     scanf  ("%f" , &b );

     printf ("\n o valor de b mudou para  = %.2f\n" , b );
    fflush (stdin);


     
     return 0;

}

