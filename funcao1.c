#include <stdio.h>
#include <stdlib.h>


/*Fazer uma função que
retorna o maior entre
dois numeros.*/

int maiorNumero(int num1, int num2){
    if(num1 > num2){
        return num1;
    }else{
        return num2;
    }
}

int main() {

    int n1, n2, maior;

    printf("Digite dois numeros:\n");
    scanf("%d %d", &n1, &n2);

    maior = maiorNumero(n1, n2);

    printf("O maior valor eh: %d\n", maior);

    return 0;
}