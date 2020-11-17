// ADS 2020 - LINGUAGEM DE PROGRAMAÇÃO
// CAPÍTULO 05 - EXERCÍCIO 12
/* Criar em linguagem C e utilizando o comando WHILE ou DO WHILE, um
programa que peça números ao usuário até que a soma de todos os
números digitados for pelo menos 20.
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
#include<time.h>

main(){
    setlocale(LC_ALL,""); // Configura para o português do Brasil
    system("cls"); // Limpa o terminal
    int termo; // Variável do termo de adição
    int soma; // Variável da soma dos termos
    soma=0;
    printf("CAPÍTULO 05 - EXERCÍCIO 12");
    printf("\n\nRotina usando DO WHILE");
    do{ // Início do LOOP
        printf("\nEntre com um número: ");
        scanf("%d", &termo);
        soma+=termo;
        printf("Total = %d", soma);
    }while(soma<=20); // Limita o LOOP até que a SOMA atinja o objetivo
    printf("\nFinal total: %d", soma);
    sleep(3000);
    printf("\n\nRotina usando WHILE"); // Início da rotina com WHILE
    soma=0;
    while(soma<=20){ //  Limita o LOOP até que a SOMA atinja o objetivo
        printf("\nEntre com um número: ");
        scanf("%d", &termo);
        soma+=termo;
        printf("Total = %d", soma);
    } 
    printf("\nFinal total: %d", soma);
    sleep(3000);
    printf("\n\nRotina usando FOR"); // Início da rotina com FOR
    for(soma=0;soma<=20;){ //  Limita o LOOP até que a SOMA atinja o objetivo
        printf("\nEntre com um número: ");
        scanf("%d", &termo);
        soma+=termo;
        printf("Total = %d", soma);
    } 
    printf("\nFinal total: %d", soma);
    sleep(3000);
    printf("\n\nPrograma finalizado.");
    sleep(3000);
    
}
