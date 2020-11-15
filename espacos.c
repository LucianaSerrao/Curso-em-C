#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

    char string[90];
    int contador = 0;
    
    printf("Escreva uma frase: \n");
    gets(string);

    for(int i=0; string[i]!='\0'; i++){
        if(string[i] == ' '){
            contador++;
        }
    }

    printf("A frase possui %d espaços \n", contador);

    return 0;
}
