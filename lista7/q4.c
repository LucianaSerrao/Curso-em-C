#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char str[100];
    int i=0;
    int contador=0;

    printf("Escreva uma string, bora:\n");
    gets(str);

    while(str[i]!='\0'){
        contador++;
        i++;
    }

    printf("\n\nSua string tem %d caracteres\n\n", contador);

    return 0;
}