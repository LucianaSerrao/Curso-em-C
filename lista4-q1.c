#include <stdio.h>
#include <stdlib.h>

int main () {
    int num [20];
    int i, j;
    int maior=0;
    int menor=600;
    int posicao_maior;
    int posicao_menor;
    int posicao_igual;
    int igual;
    
    printf ("Digite 20 numero inteiros: ");
    for (i=0;i<20;i++){
        scanf ("%d", &num[i]);
        if (num[i]>maior){
            maior = num [i];
            posicao_maior=i;
        } 
        if (num[i]<menor){
            menor = num[i];
            posicao_menor =i;
        }
    }

    printf ("Seu maior número é %d, que está na posição %d \n", maior, posicao_maior);
    printf ("Seu menor número é %d, e está na posição %d \n", menor, posicao_menor);

//aqui vamos percorrer o array todo, comparando sempre uma posição com todas as outras a sua frente
    for(i=0; i<20; i++){
        for(j=(i+1);j<20;j++){
            if(num[i] == num[j]){
                igual = num[i];
                posicao_igual = i;
                printf ("O número %d se repete, e aparece primeiro na posição %d \n", igual, posicao_igual);
            }
        }
    }

    return 0;
}