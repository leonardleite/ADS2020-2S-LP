// ADS 2020 - LINGUAGEM DE PROGRAMA��O
// CAP�TULO 07 - EXERC�CIO 03
/* Preencher um vetor com os n�meros pares de 2 a 20 e mostrar na tela.*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<locale.h>
#include<string.h>


main(){
    setlocale(LC_ALL,""); // Configura o terminal para o portugues do Brasil
    system("cls");
    int vet[10];
    int i, j;
     // Armazenar os numeros pares de 2 a 20 no vetor
    for(i=2,j=0;i<=20;i++){
        if((i%2)==0){  
            vet[j] = i;
            j++;
        }
    }     
    printf("\nO vetor preenchido com os n�meros pares de 2 a 20 �: \n\n");
    // Imprimir os n�meros do vetor
    for(i=0;i<j;i++){
        printf("%d ", vet[i]);
    }
    sleep(3000);
    printf("\n\nPrograma Finalizado.");
    sleep(2000);
}
