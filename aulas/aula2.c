#include <stdio.h>
int fat(n);

int main (){
    int n;
    printf ("Digite um numero");
    scanf ("%d",&n);
    printf("%d",fat(n));
}
int fat(int n){
    int i;
    int fat=1;
    for (i=1;i<=n;i++){
        fat=fat*i;

    }
    return fat;
}
