#include <stdio.h>
#include <stdlib.h>
#include <string.h>
parei na aula 2 16:48
/*
DATA 25.06.2020
IRA CRIP DE ALGUMA COISA
*/
// Configuração da chave de criptografia
 char CHAVE []="AbCd";
 //int TAM_CHAVE = strlen(CHAVE);

//vetor de entrada do texto
char TEXTO[10000];
//int TAM_TEXTO=strlen(TEXTO);
// grupo de funções

void Receber_Arquivo()
 {}
void  Recebe_texto (char tipo [])
{
    char aux[10000];
    if (strcmp(tipo,"msg")==0)
    {

        printf ("\n\n Recebendo texto\n\n");
        printf("\n\nDigite o texto:");
        gets(aux);
        if (strlen(aux)<=TEXTO)
        {
            printf ("\n\nTudo ok\n\n");
            system("pause");
        }else
        {
            printf ("\n\nTamanho do texto extrapolado\n\n");
            system("pause");

        }
        printf ("\n\nCriptogafando texto\n\n");
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
     printf ("\n\n Criptografar texto ou arquivo");
     printf ("\n\n\n 1 - Digitar texto");
     printf ("\n\n 2 - Importar texto");
     printf ("\n\n 3 - Voltar ao menu principal");
     printf ("\n\n Informe a opção desejada");
     scanf ("%d",&opcao);
     setbuf(stdin,NULL);
     switch (opcao)
     {
         case 1:
            system ("cls");
            Recebe_texto("msg");
            break;
        case 2 :
            system ("cls");
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
         system ("cls");
         printf ("\n\tCriptografia de dados");
         printf ("\n\n 1 - Criptografar texto");
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
            system ("cls");
            Receber_Arquivo();
            break;
        case 3:
            printf ("\nFinalizando...\n\n");
            system ("pause");
            exit (0);
         default:
            printf ("opcao invalida. Tente novamente....");
             break;
         }
     }

 }

//FUNÇÃO PRINCIPAL
int main ()
{
    Menu();
    return 0;
}
