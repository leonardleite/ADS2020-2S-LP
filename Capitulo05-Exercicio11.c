// ADS 2020 - LINGUAGEM DE PROGRAMAÇÃO
// CAPÍTULO 05 - EXERCÍCIO 11
/* Criar em linguagem C e utilizando o comando WHILE e / ou DO WHILE
aninhado, um programa conforme imagem abaixo.

1   2   3   4
2   4   6   8
3   6   9  12
4   8  12  16
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
    int pos; // Variável de controle de posição
    printf("CAPÍTULO 05 - EXERCÍCIO 09");
    printf("\n\nRotina executada com WHILE");
    printf("\n");
    contLN=1;
    while(contLN<=4){ // Controle de posicionamento de linhas
        contCL=1;
        while(contCL<=4){ // Controle de posicionamento de colunas     
            pos=contLN*contCL;
            if(pos<10)printf("   %d", (pos));
            else printf("  %d", (pos));
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
    do{ // Controle de posicionamento de linhas
        contCL=1;
        do{ // Controle de posicionamento de colunas
            pos=contLN*contCL;
            if(pos<10)printf("   %d", pos);
            else printf("  %d", pos);
            contCL++;
            sleep(200);
        }while(contCL<=4);
        contLN++;
        printf("\n");
        sleep(300);
    }while(contLN<=4);
    sleep(3000);
    printf("\nRotina realizada com FOR");
    printf("\n");
    for(contLN=1;contLN<=4;contLN++){ // Controle de posicionamento de linhas
        for(contCL=1;contCL<=4;contCL++){ // Controle de posicionamento de colunas
            pos=contLN*contCL;
            if(pos<10)printf("   %d", pos);
            else printf("  %d", pos);
            sleep(200);
        }
        printf("\n");
        sleep(300);
    }
    sleep(3000);
    printf("\nPrograma finalizado.");
    sleep(2000);
}
