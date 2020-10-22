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

     
        float nota1, nota2, nota3;        
        int numeroProvas = 3;        
        int numeroAlunxs = 3 ;
        int i; //variavel auxiliar

        float soma[3], media[3];
        int numeroFaltas[3];

        printf("--- CÁLCULO DA MÉDIA ---\n\n");

        for(i=0; i<(numeroAlunxs); i++){
            printf("Digite a nota da 1ª prova do %dº alunx: ", i+1);   
            scanf("%f", &nota1);

            printf("Digite a nota da 2ª prova do %dº alunx: ", i+1);
            scanf("%f", &nota2);

            printf("Digite a nota da 3ª prova do %dº alunx: ", i+1);
            scanf("%f", &nota3);
            
            printf("Digite o número de faltas do %dº alunx: ", i+1);
            scanf("%d", &numeroFaltas[i]);

            soma[i] = (nota1 + nota2 + nota3);
            media[i] = (soma[i]/numeroProvas);

            if((media[i] >= 7.0) && (numeroFaltas[i] < 12)) {
                printf("\nVocê foi aprovadx!!!\n");
            } else {
                if((media[i] < 5.0) || (numeroFaltas[i] >= 12)){
                    printf("Você foi reprovadx direto :( \n");
                }
                else{                
                    printf("Você está na final, repare.\n");
                }            
            }   

        }

    return 0; 
 }   
    /*  
			gcc prova.c -o prova
			./prova
	    No primeiro comando o gcc indica que você está compilando o arquivo prova.c e o comando -o é usado para criar um arquivo executável, 		chamado prova. Em seguida você irá executar este arquivo criado através do comando ./prova 
    */