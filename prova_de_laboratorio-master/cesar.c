#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Colaboracao Henry-Keys: Port do header conio.h para Linux =)*/
#include <ctype.h>

#ifdef WIN32
#include <conio.h>

#else
#define getch(a) getchar(a); fflush(stdin)
#endif
/*-------------------------*/


/*Definindo um tipo booleano no braço ;D*/
enum booleano
{
    true = 1, false = 0
};
typedef enum booleano BOOL;
/*--------------------------------------*/


/*procedimento para limpar a tela...reaproveitando codigo*/
void limpar()
{
    system ("clear || cls");
}
/*-------------------------------------------------------*/


/*Funcao que faz substituicao de cada letra no texto de acordo com a chave numerica informada*/
char cifraCesar(char *texto, int chave, int tipo) // tipo = 0 -> cifrar| tipo = 1 -> decifrar
{
    /*-----VARIAVEIS PRINCIPAIS--------*/
    int tam=strlen(texto); //recupera o tamanho da string texto
    int i=0; // variavel aux. incremento
    int cont=0; // variavel contador... impendido cifrar uma posicao já cifrada...
    char letra; //variavel alfabeto xD
    /*----------------------------------*/


    /*----------LOOP PARA SUBSTITUIÇÃO---------*/
    for (letra='a'; letra<='z'; letra++)
        {
            while(i<=tam)
                {
                    if(texto[i] == letra)
                        {
                          /*Condição para cifrar/decifrar o texto/codigo*/
                            if(tipo == 0)
                                texto[i] = letra+chave;

                            else if (tipo == 1)
                                texto[i] = letra-chave;

                            i++;
                            cont ++;
                            letra='a';

                        }

                    else if(texto[i] == ' ')
                        {
                            i++;
                            cont ++;
                            letra='a';
                        }

                    else if(texto[i] == toupper(letra))
                        {

                            if(tipo == 0)
                                texto[i] = toupper(letra+chave);
                            else if (tipo == 1)
                                texto[i] = toupper(letra-chave);

                            i++;
                            cont ++;
                            letra='a';
                        }

                    else
                        letra++;

                    if(cont == tam)
                        break;

                }
        }
    /*-----------------------------------------*/

    if(tipo == 0)
        return printf("Codigo gerado: %s\n",texto);
    else
        return printf("Mensagem decifrada: %s\n",texto);
}
/*-------------------------------------------------------------------------------------------*/


int main()
{
    /*-----VARIAVEIS PRINCIPAIS--------*/
    int op=3;
    int chave;
    char *mensagem;
    const int tamanho = 100;
    BOOL confirma=false;
    /*----------------------------------*/

    /*Alocando memoria para receber mensagem (texto puro) e cifrado (texto criptografado)*/
    mensagem = (char *)malloc(tamanho);
    /*-----------------------------------------------------------------------------------*/



    while (op!=0)
        {

            printf ("\n--------------------------------------------\n");
            printf ("\n -- Sistema de Criptografia - CifraCesar --\n");
            printf ("\n--------------------------------------------\n");

            printf ("\t\t Escolha uma Opcao: \n\n");

            printf ("1-)Criptografar Texto \n");
            printf ("2-)Decifrar Codigo \n");
            printf ("0-)Sair \n");
            scanf  ("%d",&op);

            if (op ==  1)
                {

                    printf("Chave de Deslocamento: ");
                    scanf ("%d",&chave);

                    printf ("Mensagem: \n");
                    fflush(stdin);
                    gets(mensagem);

                    cifraCesar(mensagem,chave,0);
                    getch();

                    confirma=true;
                    limpar();
                }

            else if (op == 2)
                {

                    if (confirma == false)
                        {
                            printf ("Cifre uma mensagem primeiro!\n");
                            getch();

                            limpar();
                        }

                    else if(confirma == true)
                        {

                            cifraCesar(mensagem,chave,1);
                            getch();

                            confirma=false;
                            limpar();
                        }
                }

            else if (op == 0)
                {
                    free(mensagem);
                    break;
                }

            else
                {

                    printf("\n\t Verifique a Opcao escolhida!\n");
                    getch();

                    limpar();
                }


        }

}
