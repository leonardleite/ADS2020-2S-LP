// ADS 2020 - LINGUAGEM DE PROGRAMAÇÃO
// CAPÍTULO 07 - EXERCÍCIO 11
/* Neste exercicio temos dois vetores com 5 posições. Em cada vetor entraremos
com cinco números. Mostrar os números e depois somar os números que pertecem a 
mesma posição*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>

main(){
    setlocale(LC_ALL,"");
    system("cls");
    srand((unsigned)time(NULL));
    
    // Declaração de variáveis
    int vetor1[5];
    int vetor2[5];
    int i;
    int soma;
    
    // Obtenção dos elementos
    for(i=0;i<5;i++){
        vetor1[i]=rand()%100;              
        vetor2[i]=rand()%100;               
    }
    
    // Mostrar e somar os elementos dos vetores de mesmo índice
    for(i=0;i<5;i++){
        soma=vetor1[i]+vetor2[i];
        printf("\nNo índice %d temos: ",i);
        printf("\nNo primeiro vetor o elemento: %d.",vetor1[i]); 
        printf("\nNo segundo vetor o elemento: %d.",vetor2[i]); 
        printf("\nA soma dos elementos é: %d.",soma); 
        printf("\n");
        sleep(3000);
    }
    printf("\n");
    sleep(2000);
    printf("\nPrograma Finalizado.");
    sleep(5000);
           
}
