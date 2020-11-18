#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char nome[10];
    int i=0;

    printf("Digite seu primeiro nome:\n");
    gets(nome);
    
    while(i != 4){
        printf("%c", nome[i]);
        i++;
    }

    return 0;
}