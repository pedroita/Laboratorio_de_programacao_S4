#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include  "funcoes.h"
void Receber_Arquivo()
 {}
void  Recebe_texto (char tipo [])
{
    if (strcmp(tipo,"msg")==0)
    {
        
        printf ("\n\n Recebendo MENSAGEM\n\n");
        system("pause");
        
    }else if (strcmp(tipo, "arquivo")==0)
        {
            printf ("\n\n Recendo ARQUIVO\n\n");
            system ("pause");
        }else
            {
                printf ("\n\n Erro ao RECEBER!\n\n");
                system("pause");
            }
}
 void Menu_Criptografar()
 {
     int opcao;
     printf ("\n\tCriptografia de dados");
     printf ("\n\n Criptografar mesagem ou arquivo");
     printf ("\n\n\n 1 - Digitar mensagem");
     printf ("\n\n 2 - Importar mensagem");
     printf ("\n\n 3 - Voltar ao menu principal");
     printf ("\n\n Informe a opção desejada");
     scanf ("%d",&opcao);
     setbuf(stdin,NULL);
     switch (opcao)
     {
         case 1:
            system ("clear");
            Recebe_texto("msg");
            break;
        case 2 :
            system ("clear");
            Recebe_texto ("arquivo");
            break;
        case 3:
            break;
       default:
            printf ("opção invalida. Tente novamente....");
             break;

     }

 }
 void Menu()
 {
    // variel
    int opcao;
    // só para se tiver break
     while (1)
     {
         system ("clear");
         printf ("\n\tCriptografia de dados");
         printf ("\n\n 1 - Criptografar mesagem");
         printf ("\n\n 2 - Receber arquivo");
         printf ("\n\n 3 - Sair ");
         printf ("\n\n Informe a opção desejada: ");
         scanf ("%d",&opcao);
         setbuf (stdin,NULL);
         switch (opcao)
         {
         case 1:
             Menu_Criptografar();
             break;
         case 2:
            system ("clear");
            Receber_Arquivo();
            break;
        case 3:
            printf ("\nFinalizando...\n\n");
            system ("pause");
            exit (0);
         default:
            printf ("opção invalida. Tente novamente....");
             break;
         }
     }
     
 }