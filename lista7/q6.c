#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char nome[30];
    int i;

    printf("Digite seu nome:\n");
    gets(nome);

    for(i=0; nome[i]!='\0'; i++){
        if(nome[i] == ' ')
            continue;
        else
            printf("%c", nome[i]);
    }

    return 0;
}