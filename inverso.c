#include <stdio.h>
#include <stdlib.h>

int main () {

    int num[10];
    int i=0;

    printf ("Insira 10 números inteiros : \n");
    
    for (i=0;i<=9;i++){
        scanf ("%d \n", &num[i]);
    }

    printf ("Seus números na ordem inversa são: \n");
    
    for (i=9;i>=0;i--){
        printf ("%d\n",num[i]);
    }
    return 0;
}