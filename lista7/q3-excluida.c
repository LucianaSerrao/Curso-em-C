#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char nome[30];
    char nomeSemVogal[10];
    int i, j;

    printf("Digite seu nome:\n");
    gets(nome);

    j=0;

    for(i=0; nome[i]!='\0'; i++){
        if((nome[i] == 'A') || (nome[i] == 'a')){
            continue;
        }
        if((nome[i] == 'E') || (nome[i] == 'e')){
            continue;
        }
        if((nome[i] == 'I') || (nome[i] == 'i')){
            continue;
        }
        if((nome[i] == 'O') || (nome[i] == 'o')){
            continue;
        }
        if((nome[i] == 'U') || (nome[i] == 'u')){
            continue;
        }
        else{
            nomeSemVogal[j] = nome[i];
            j++;
        }
    }

    j++;
    nomeSemVogal[j] = '\0';

    printf("\n\nSeu nome sem vogal eh: %s\n", nomeSemVogal);
    return 0;
}