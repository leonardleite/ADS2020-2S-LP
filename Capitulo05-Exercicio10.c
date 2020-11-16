// ADS 2020 - LINGUAGEM DE PROGRAMAÇÃO
// CAPÍTULO 05 - EXERCÍCIO 10
/* Criar em linguagem C e utilizando o comando WHILE e / ou DO WHILE
aninhado, um programa conforme imagem abaixo.

*
**
***
****
*****
******
*******

*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
#include<time.h>

main(){
    setlocale(LC_ALL,""); // Configura para o português do Brasil
    system("cls"); // Limpa a tela do terminal
    int contLN; // Variável de controle de linha
    int contCL; // Variável de controle de colunas (*)
    printf("CAPÍTULO 05 - EXERCÍCIO 09");
    printf("\n\nRotina executada com WHILE");
    printf("\n");
    contLN=1;
    while(contLN<=7){
        contCL=1;
        while(contLN>=contCL){                    
            printf("*");
            sleep(200);
            contCL++;
        }
        contLN++;
        printf("\n");
        sleep(300);
    }
    sleep(3000);
    printf("\nRotina executada com DO WHILE");
    printf("\n");
    contLN=1;
    do{
        contCL=1;
        do{
            printf("*");
            contCL++;
            sleep(200);
        }while(contLN>=contCL);
        contLN++;
        printf("\n");
        sleep(300);
    }while(contLN<=7);
    sleep(3000);
    printf("\nRotina realizada com FOR");
    printf("\n");
    for(contLN=1;contLN<=7;contLN++){
        for(contCL=1;contLN>=contCL;contCL++){
            printf("*");
            sleep(200);
        }
        printf("\n");
        sleep(300);
    }
    sleep(3000);
    printf("\nPrograma finalizado.");
    sleep(2000);
}
