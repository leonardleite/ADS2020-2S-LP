// ADS 2020 - LINGUAGEM DE PROGRAMA��O
// CAP�TULO 07 - EXERC�CIO 09
/* Preencher um vetor com 8 elementos inteiros. Mostrar o vetor e informar 
quantos n�meors s�o maiores que 30, somar estes n�meros. Somar todos os n�meros*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<locale.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>


main(){
    setlocale(LC_ALL,"");
    system("cls");
    srand((unsigned)time(NULL));
    int vetor1[8];
    int i, soma, soma30;
    printf("\n\nPreencher um vetor com 8 elementos inteiros. Mostrar o vetor e informar "); 
    printf("\nquantos n�meors s�o maiores que 30, somar estes n�meros. Somar todos os n�meros");
    printf("\n");
    
    // Escolher os n�meros do vetor
    for(i=0;i<8;i++){
        vetor1[i]=rand()%60;
    }
    
    //Mostrar o vetor
    for(i=0;i<8;i++){
        printf("\nNa posi��o de n�mero %d est� o n�mero %2d.",i+1,vetor1[i]);
        sleep(1000);
    }    
    printf("\n");
    // N�meros maiores que 30 e soma. Soma de todos os n�meros
    for(i=0,soma30=0,soma=0;i<8;i++){
        if(vetor1[i]>30){
            printf("\nO n�mero %d � maior que 30 e est� na posi��o de n�mero %d.",vetor1[i],i+1);
            soma30+=vetor1[i];
            sleep(1000);
        }
        soma+=vetor1[i];
    }
    printf("\n");
    sleep(1000);
    printf("\nA soma dos n�meros maiores que 30 � %d.",soma30);
    printf("\nA soma de todos os n�meros � %d.",soma);
    sleep(3000);
    printf("\n\nPrograma Finalizado.");
    sleep(5000);
    
}
