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
        float soma, media;
        float numeroProvas = 3;

        printf("--- CÁLCULO DA MÉDIA ---\n\n");
        printf("Digite a nota da 1ª prova: ");   
        scanf("%f", &nota1);

        printf("Digite a nota da 2ª prova: ");
        scanf("%f", &nota2);

        printf("Digite a nota da 3ª prova: ");
        scanf("%f", &nota3);

        soma = (nota1 + nota2 + nota3);
        media = (soma/numeroProvas);

        if(media >= 7.0) {
            printf("\nVocê foi aprovadx!!!\n");
        } else {
            if(media >= 5.0){
                printf("Você está na final, repare.\n");
            }
            else{
                printf("Você foi reprovadx direto :( ");
            }            
        }   


    return 0; 
    
    /*  

			gcc prova.c -o prova

			./prova

	    No primeiro comando o gcc indica que você está compilando o arquivo prova.c e o comando -o é usado para criar um arquivo executável, 		chamado prova. Em seguida você irá executar este arquivo criado através do comando ./prova 
    */
