#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char nomeCompleto[90];
    int i;

    printf("Digite seu nome completo:\n\n");
    gets(nomeCompleto);

    for(i=0; nomeCompleto[i]!='\0'; i++){
        if(nomeCompleto[i] == ' '){
            i++;
            while(nomeCompleto[i] !=' '){
                printf("%c", nomeCompleto[i]);
                i++;
            }
        }
    }

    return 0;
}