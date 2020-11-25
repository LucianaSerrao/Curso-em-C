// fatorial = 1.2.3.4.5....n

// fatorial 4 = 4! = 1.2.3.4

// fatorial 70 = 70! = 1.2.3.4....69.70

#include <stdio.h>
#include <stdlib.h>

int fatorial(int numero){
    int fat = 1;
    int i;

    for(i=numero; i>0; i--){
        fat = fat * i;
    }

    return fat;
}

int main(){

    printf("O fatorial de 4 eh: %d\n", fatorial(4));
    printf("O fatorial de 2 eh: %d\n", fatorial(2));
    printf("O fatorial de 7 eh: %d\n", fatorial(7));
    printf("O fatorial de 5 eh: %d\n", fatorial(5));

    return 0;
}