/* Para rodar o seu código:


    PASSO 1: no terminal, vá até a pasta onde está o seu arquivo usando os comandos a seguir

                    ls ( mostra todos os diretórios - pastas e arquivos -  da pasta que você se encontra no terminal)

                    cd <nome da pasta>  (voce 'entra' na pasta especificada)

 
    PASSO 2: uma vez no diretório (pasta) em que se encontra o arquivo do seu código, compile e execute o arquivo executável
            com os comandos abaixo

			        gcc prova.c -o prova

			        ./prova

	No primeiro comando o gcc indica que você está compilando o arquivo prova.c e o comando -o é usado para criar um arquivo executável, 		chamado prova. Em seguida você irá executar este arquivo criado através do comando ./prova 
*/


 #include <stdio.h>
 #include <stdlib.h>

 // a função printf() é utilizada para escrita na tela

 // a função scanf() é utilizada para leitura de tela

 int main(){

        int numeroProvas = 3;
        int numeroAlunxs = 3 ;

        float alunx_1[3];
        float alunx_2[3];
        float alunx_3[3];

        float soma[3]; 
        float media[3];
        int numeroFaltas[3];

        int i; //variavel auxiliar

        printf("--- INSERÇÃO DAS NOTAS ---\n\n");

        //for(i=1; i<=numeroProvas; i++){
            printf("--- NOTAS DO ALUNX 1 ---\n\n");
            printf("Digite a nota da 1ª prova do 1º alunx: ");   
            scanf("%f", &alunx_1[0]);

            printf("Digite a nota da 2ª prova do 1º alunx: ");
            scanf("%f", &alunx_1[1]);

            printf("Digite a nota da 3ª prova do 1º alunx: ");
            scanf("%f", &alunx_1[2]);

            printf("Digite o número de faltas do 1º alunx: ");
            scanf("%d", &numeroFaltas[0]);

            soma[0] = (alunx_1[0] + alunx_1[1] + alunx_1[2]);
            media[0] = (soma[0]/numeroProvas);

            if((media[0] >= 7.0) && (numeroFaltas[0] < 12)) {
                printf("\nVocê foi aprovadx!!!\n");
            } else {
                if((media[0] < 5.0) || (numeroFaltas[0] >= 12)){
                    printf("Você foi reprovadx direto :( \n");
                }
                else{                
                    printf("Você está na final, repare.\n");
                }            
            }   

       // }

        //for(i=1; i<=numeroProvas; i++){
            printf("--- NOTAS DO ALUNX 2 ---\n\n");
            printf("Digite a nota da 1ª prova do 2º alunx: ");   
            scanf("%f", &alunx_2[0]);

            printf("Digite a nota da 2ª prova do 2º alunx: ");
            scanf("%f", &alunx_2[1]);

            printf("Digite a nota da 3ª prova do 2º alunx: ");
            scanf("%f", &alunx_2[2]);

            printf("Digite o número de faltas do 2º alunx: ");
            scanf("%d", &numeroFaltas[1]);

            soma[1] = (alunx_2[0] + alunx_2[1] + alunx_2[2]);
            media[1] = (soma[1]/numeroProvas);

            if((media[1] >= 7.0) && (numeroFaltas[1] < 12)) {
                printf("\nVocê foi aprovadx!!!\n");
            } else {
                if((media[1] < 5.0) || (numeroFaltas[1] >= 12)){
                    printf("Você foi reprovadx direto :( \n");
                }
                else{                
                    printf("Você está na final, repare.\n");
                }            
            }   

      //  }

       // for(i=1; i<=numeroProvas; i++){
            printf("--- NOTAS DO ALUNX 1 ---\n\n");
            printf("Digite a nota da 1ª prova do 3º alunx: ");   
            scanf("%f", &alunx_3[0]);

            printf("Digite a nota da 2ª prova do 3º alunx: ");
            scanf("%f", &alunx_3[1]);

            printf("Digite a nota da 3ª prova do 3º alunx: ");
            scanf("%f", &alunx_3[2]);

            printf("Digite o número de faltas do 3º alunx: ");
            scanf("%d", &numeroFaltas[2]);

            soma[2] = (alunx_3[0] + alunx_3[1] + alunx_3[2]);
            media[2] = (soma[2]/numeroProvas);

            if((media[2] >= 7.0) && (numeroFaltas[2] < 12)) {
                printf("\nVocê foi aprovadx!!!\n");
            } else {
                if((media < 5.0) || (numeroFaltas >= 12)){
                    printf("Você foi reprovadx direto :( \n");
                }
                else{                
                    printf("Você está na final, repare.\n");
                }            
            }   

      //  }

    return 0; 
 }   
    /*  

			gcc prova.c -o prova

			./prova

	    No primeiro comando o gcc indica que você está compilando o arquivo prova.c e o comando -o é usado para criar um arquivo executável, 		chamado prova. Em seguida você irá executar este arquivo criado através do comando ./prova 
    */
