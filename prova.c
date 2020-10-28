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
        int numeroAlunxs = 3;

        //matriz =  linhas: alunx  colunas: notas
        int notas_alunxs[numeroAlunxs][numeroProvas];
        
        int notas, alunxs; //variaveis auxiliares do 'for'

        float soma[3] = 0;
        float media[3];
        int numeroFaltas[3];

        printf("--- CÁLCULO DA MÉDIA ---\n\n");

        for(alunxs=0; alunxs<(numeroAlunxs); alunxs++){
            for(notas=0; notas<numeroProvas; notas++){
                printf("Digite a nota da %dª prova do %dº alunx: ", notas+1, alunxs+1);   
                scanf("%f", &notas_alunxs[alunxs][notas]);
                soma[alunxs] = soma[alunxs] + notas_alunxs[alunxs][notas];
            }

            printf("Digite o número de faltas do %dº alunx: ", alunxs+1);
            scanf("%d", &numeroFaltas[alunxs]);

            media[alunxs] = soma[alunxs]/numeroProvas;

            if((media[alunxs] >= 7.0) && (numeroFaltas[alunxs] < 12)) {
                printf("\nVocê foi aprovadx!!!\n");
            } else {
                if((media[alunxs] < 5.0) || (numeroFaltas[alunxs] >= 12)){
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