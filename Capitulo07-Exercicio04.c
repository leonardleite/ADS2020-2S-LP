// ADS 2020 - LINGUAGEM DE PROGRAMA��O
// CAP�TULO 07 - EXERC�CIO 03
/* Preencher um vetor com 3 nomes com 20 letras no m�ximo cada. 
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
    printf("\nCAP�TULO 07 - EXERC�CIO 03 -  Preencher um vetor com 3 nomes com 20 letras no m�ximo cada");
    char nomes[3][20];
    int n;
    printf("\n");
    for(n=0;n<=2;n++){
        printf("\nDigite um nome com no m�ximo 20 algarismos: ");
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


