// ADS 2020 - LINGUAGEM DE PROGRAMAÇÃO
// CAPÍTULO 07 - EXERCÍCIO 02
/* Preencher um vetor com 6 números e mostrar na tela.*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<locale.h>
#include<string.h>


main(){
    setlocale(LC_ALL,""); // Configura o terminal para o portugues do Brasil
    system("cls");
    char vetor[6];
    int i;
    printf("\nPrograma de leitura de vetores.\n\n");
    for(i=0;i<=5;i++){
        printf("Digite um número inteiro para o índice %2d: ", i+1);
        scanf("%s", &vetor[i]);
        sleep(200);
    }     
    printf("\nO vetor preenchido é: ");
    puts(vetor); // Comando para imprimir no terminal um VETOR (ARRAY)
    sleep(3000);
    printf("\n\nPrograma Finalizado.");
    sleep(2000);
}
