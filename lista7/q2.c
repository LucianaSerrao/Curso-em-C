#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char nome[30];


    printf("Digite seu nome:\n");
    gets(nome);

    if((nome[0] == 'A') || (nome[0] == 'a')){
        printf("\n\nSeu nome eh: %s\n", nome);
    }
    if((nome[0] == 'E') || (nome[0] == 'e')){
        printf("\n\nSeu nome eh: %s\n", nome);
    }
    if((nome[0] == 'I') || (nome[0] == 'i')){
        printf("\n\nSeu nome eh: %s\n", nome);
    }
    if((nome[0] == 'O') || (nome[0] == 'o')){
        printf("\n\nSeu nome eh: %s\n", nome);
    }
    if((nome[0] == 'U') || (nome[0] == 'u')){
        printf("\n\nSeu nome eh: %s\n", nome);
    }
return 0;

}