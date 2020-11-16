// ADS 2020 - LINGUAGEM DE PROGRAMAÇÃO
// CAPÍTULO 07 - EXERCÍCIO 09
/* Preencher um vetor com 8 elementos inteiros. Mostrar o vetor e informar 
quantos númeors são maiores que 30, somar estes números. Somar todos os números*/

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
    printf("\nquantos númeors são maiores que 30, somar estes números. Somar todos os números");
    printf("\n");
    
    // Escolher os números do vetor
    for(i=0;i<8;i++){
        vetor1[i]=rand()%60;
    }
    
    //Mostrar o vetor
    for(i=0;i<8;i++){
        printf("\nNa posição de número %d está o número %2d.",i+1,vetor1[i]);
        sleep(1000);
    }    
    printf("\n");
    // Números maiores que 30 e soma. Soma de todos os números
    for(i=0,soma30=0,soma=0;i<8;i++){
        if(vetor1[i]>30){
            printf("\nO número %d é maior que 30 e está na posição de número %d.",vetor1[i],i+1);
            soma30+=vetor1[i];
            sleep(1000);
        }
        soma+=vetor1[i];
    }
    printf("\n");
    sleep(1000);
    printf("\nA soma dos números maiores que 30 é %d.",soma30);
    printf("\nA soma de todos os números é %d.",soma);
    sleep(3000);
    printf("\n\nPrograma Finalizado.");
    sleep(5000);
    
}
