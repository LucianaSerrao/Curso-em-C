#include <stdio.h>
#include <stdlib.h>

int valorAbsoluto(int numero){
    if(numero < 0){
        return numero*(-1);
    }else{
        return numero;
    }
}

int main(){
    printf("Valor absoluto: %d", valorAbsoluto(20));
    printf("Valor absoluto: %d", valorAbsoluto(-90));
    printf("Valor absoluto: %d", valorAbsoluto(-12));
    printf("Valor absoluto: %d", valorAbsoluto(100));
    printf("Valor absoluto: %d", valorAbsoluto(-32));

    return 0;
}