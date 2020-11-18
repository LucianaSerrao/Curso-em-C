#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char string1[90];
    char string2[90];

    printf("Digite duas strings: \n");
    gets(string1);
    gets(string2);

    printf("\n\n----- AS STRING DIGITADAS FORAM -----\n\n");
    printf("%s \n%s", string1, string2);

    return 0;
}