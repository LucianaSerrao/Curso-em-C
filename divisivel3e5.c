/* EXEMPLO PRA ENTENDER O EXEMPLO RS


->   Marcus pode ir de onibus ou de bicicleta pra faculdade


 dia 

 - ensolarado
 - chuvoso

 carteira

 - ter dinheiro
 - moscas


 se chuvoso
    se ele tiver dinheiro
        marcus vai de onibus
    ele nao tiver dinheiro
        marcus leva falta

se ensolarado
    marcus vai de bicicleta

*/


#include <stdio.h>
#include <stdlib.h>

int main () {

    int numero;

    printf("insira um número: \n");
    scanf("%d", &numero);

    if(((numero%5)  == 0) && ((numero%3) == 0))){ 
        printf("Numero divisível por 3 e por 5. Acertou!\n"); 
    }    
    else{
        printf("Número não é divisível por 5 nem por 3. Tente novamente\n");
    }

    return 0;
}

