#include <stdio.h>
#include <stdlib.h>

int main () {

    float altura [50];
    int n;
    int i;
    float maior=0;
    int posicao;

    printf ("Indique quantas pessoas há no seu grupo:");
    scanf ("%d", &n);
    printf ("Digite as alturas de cada integrante do grupo:");
    for (i=0;i<n;i++){ 
        scanf("%f", &altura [i]);
        if (altura [i]>maior){
            maior = altura [i];
            posicao = i;
        }
    } printf ("A altura da pessoa mais alta é %f e sua posição no array é %d", maior, posicao);

    return 0;
}