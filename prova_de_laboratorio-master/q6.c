#include <stdio.h>
#include <stdlib.h>

//funcao mover disck, recebe o numero de disk;
// recebe origem, o destinho e aux pra ficar quando os valores
void move_disck(int d,char orin,char dest,char aux)
{
    //quando o disk for igual a 1 ele ira para
    if (d==1)
    {
        printf ("Mover disco %d de  %c para %c \n ",d,orin,dest);

    }else
    //esse else chama de formar recusiva a função movedisk
    {
      move_disck(d-1,orin,aux,dest);
      printf ("Mover disco %d de  %c para %c \n ",d,orin,dest);
      move_disck(d-1,aux,dest,orin);

    }

}

int main ()
{
    int disck;
    printf ("Digite o numero de disk que deseja mover:\n");
    scanf ("%d",&disck);
    move_disck(disck,'A','C','B');
    return 0;
}
