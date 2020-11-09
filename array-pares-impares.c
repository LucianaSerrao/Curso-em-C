 #include <stdio.h>
 #include <stdlib.h>

 int main () {

     float array[15], pares[15], impares[15];
     int i, j, k;

    j=0;
    k=0; 

    printf("Digite 15 números: \n");

    for(i=0; i<15; i++){
        scanf("%.2f", &array[i]);  // .2f é para pegar somente 2 casas decimais ex: 2.30 em vez de 2.3000000
        if((array[i] % 2) == 0){
            pares[j] = array[i];
            j++;
        }else{
            impares[k] = array[i];
            k++;
        }
    }

    return 0;
 }