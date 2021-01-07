 #include <stdio.h>
 #include <stdlib.h>
 #include <math.h>

 int  main ()
 {
    int vet[5],i,aux,cont=5;
    for (i=1;i<5;i++){
    fflush(stdin);
    printf ("Digite o  numero %d:\n",i);
    scanf ("%d",&vet[i]);
    }
    printf ("Somando o numero mais 7 e fazendo seu modulo e dividindo por 10\n");
    for(i=1;i<5;i++){
        vet[i]=vet[i]+7;
        vet[i]=abs(vet[i]);
        printf ("%d-\n",vet[i]);
        vet[i]=vet[i]/10;
        printf ("%d-\n",vet[i]);
    }
    for (i=0;i<5;i++)
    {
        aux=vet[cont];
        vet[cont]=vet[3];
        vet[i]=aux;
    }
    for(i=1;i<5;i++){
        printf ("%d-\n",vet[i]);
    }
    system("pause");
    return 0;
 }
