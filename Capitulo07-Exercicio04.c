// ADS 2020 - LINGUAGEM DE PROGRAMAÇÃO
// CAPÍTULO 07 - EXERCÍCIO 03
/* Preencher um vetor com 3 nomes com 20 letras no máximo cada. 
Imprimir os nomes*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<locale.h>
#include<string.h>


main(){
    setlocale(LC_ALL,"");
    system("cls");
    printf("\nCAPÍTULO 07 - EXERCÍCIO 03 -  Preencher um vetor com 3 nomes com 20 letras no máximo cada");
    char nomes[3][20];
    int n;
    printf("\n");
    for(n=0;n<=2;n++){
        printf("\nDigite um nome com no máximo 20 algarismos: ");
        gets(nomes[n]);
    }
    printf("\n\n");
    sleep(2000);
    for(n=0;n<=2;n++){
        printf("O %d nome digitado foi : ", n+1); 
        puts(nomes[n]);
        sleep(2000);
    }
    printf("\nPrograma Finalizado.");
    sleep(2000);
}


