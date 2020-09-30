#include <stdio.h>
#include <stdlib.h>


int main () {     

    int total;
    int cedulas_de_cem, cedulas_de_cinquenta, cedulas_de_vinte;
    int cedulas_de_dez, cedulas_de_cinco, cedulas_de_dois, cedulas_de_um;

    printf("----- Contagem de cedulas -----\n");

    printf("Informe a quantidade de dinheiro que voce possui: \n");
    scanf("%d", &total);   // aqui eh recebido o saldo total que o usuario possui

    cedulas_de_cem = (total/100);  //nessa atribuição, lê-se da direita pra esquerda da atribuição, ou seja, a conta é feita
                                  // e o valor obtido é atribuído à variável do lado esquerdo

    printf("SERAO %d CEDULAS DE R$ 100,00 \n", cedulas_de_cem);  //apenas mostrar na tela

    total = (total-cedulas_de_cem);  //nessa atribuição, lendo da direita para a esquerda, primeiro faremos a conta com o 
                                    // saldo que o usuario possui no banco, diminuindo o valor de notas de cem, e atribuindo
                                    // o montante restante no banco, à variável total, ou seja, total agora possui o valor
                                    // do novo montante que o usuário possui no banco

    cedulas_de_cinquenta = (total/50); 

    printf("SERAO %d CEDULAS DE R$ 50,00 \n", cedulas_de_cinquenta);

    total -= cedulas_de_cinquenta;

    cedulas_de_vinte = (total/20);

    printf("SERAO %d CEDULAS DE R$ 20,00 \n", cedulas_de_vinte);

    total -= cedulas_de_vinte;

    cedulas_de_dez = (total/10);

    printf("SERAO %d CEDULAS DE R$ 10,00 \n", cedulas_de_dez);

    total -= cedulas_de_dez;

    cedulas_de_cinco = (total/5);

    printf("SERAO %d CEDULAS DE R$ 5,00 \n", cedulas_de_cinco);

    total -= cedulas_de_cinco;

    cedulas_de_dois = (total/2);

    printf("SERAO %d CEDULAS DE R$ 2,00 \n", cedulas_de_dois);

    total -= cedulas_de_dois;

    cedulas_de_um = (total/1);


    return 0;
    
}