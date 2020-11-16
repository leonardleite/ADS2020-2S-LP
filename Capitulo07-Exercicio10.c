// ADS 2020 - LINGUAGEM DE PROGRAMAÇÃO
// CAPÍTULO 07 - EXERCÍCIO 10
/* Preencher um vetor com 8 elementos inteiros. Mostrar o vetor na horizontal com \t.
Calcular a média do vetor. Mostrar quantos números são multiplos de 5. Quantos são 
maiores que 10 e menores que 30. Qual o maior número do vetor*/

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
    int vetor[8];
    int n;
    float media, fsoma;
    int maior,soma,mult5,entre10e30;
    // Montar o vetor com 8 elementos
    for(n=0;n<8;n++){
        vetor[n]=rand()%60;
    }
    printf("\n");
    
    //Mostrar o vetor na horizontal
    for(n=0;n<8;n++){
        printf("%d\t",vetor[n]);
    }    
    printf("\n");
    
    //Calcular a média. Verificar multiplos de 5. Quantos entre 10 e 30. Maior
    for(n=0,soma=0,mult5=0,entre10e30=0;n<8;n++){
        soma+=vetor[n];
        if((vetor[n]%5)==0)mult5++;
        if((vetor[n]>=10)&&(vetor[n]<=30))entre10e30++;
        if(n==0)maior=vetor[n];
        else if(maior<vetor[n])maior=vetor[n];        
    }    
    
    // Imprimir na tela
    fsoma=soma;
    media=fsoma/8;
    printf("\n");
    printf("\nA média dos elementos do vetor é %.2f.",media);
    sleep(2000);
    printf("\n");
    printf("\nO vetor tem %d elementos multiplos de 5.",mult5);
    sleep(2000);
    printf("\n");
    printf("\nO vetor possui %d elementos entre 10 e 30.",entre10e30);
    sleep(2000);
    printf("\n");
    printf("\nO maior elemento é %d.", maior);
    sleep(2000);
    printf("\n");
    printf("\n\nPrograma Finalizado.");
    sleep(3000);
}
