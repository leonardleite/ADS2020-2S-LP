// ADS 2020 - LINGUAGEM DE PROGRAMA��O
// CAP�TULO 07 - EXERC�CIO 11
/* Neste exercicio temos dois vetores com 5 posi��es. Em cada vetor entraremos
com cinco n�meros. Mostrar os n�meros e depois somar os n�meros que pertecem a 
mesma posi��o*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>

main(){
    setlocale(LC_ALL,"");
    system("cls");
    srand((unsigned)time(NULL));
    
    // Declara��o de vari�veis
    int vetor1[5];
    int vetor2[5];
    int i;
    int soma;
    
    // Obten��o dos elementos
    for(i=0;i<5;i++){
        vetor1[i]=rand()%100;              
        vetor2[i]=rand()%100;               
    }
    
    // Mostrar e somar os elementos dos vetores de mesmo �ndice
    for(i=0;i<5;i++){
        soma=vetor1[i]+vetor2[i];
        printf("\nNo �ndice %d temos: ",i);
        printf("\nNo primeiro vetor o elemento: %d.",vetor1[i]); 
        printf("\nNo segundo vetor o elemento: %d.",vetor2[i]); 
        printf("\nA soma dos elementos �: %d.",soma); 
        printf("\n");
        sleep(3000);
    }
    printf("\n");
    sleep(2000);
    printf("\nPrograma Finalizado.");
    sleep(5000);
           
}
