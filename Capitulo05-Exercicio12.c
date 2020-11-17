// ADS 2020 - LINGUAGEM DE PROGRAMA��O
// CAP�TULO 05 - EXERC�CIO 12
/* Criar em linguagem C e utilizando o comando WHILE ou DO WHILE, um
programa que pe�a n�meros ao usu�rio at� que a soma de todos os
n�meros digitados for pelo menos 20.
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
#include<time.h>

main(){
    setlocale(LC_ALL,""); // Configura para o portugu�s do Brasil
    system("cls"); // Limpa o terminal
    int termo; // Vari�vel do termo de adi��o
    int soma; // Vari�vel da soma dos termos
    soma=0;
    printf("CAP�TULO 05 - EXERC�CIO 12");
    printf("\n\nRotina usando DO WHILE");
    do{ // In�cio do LOOP
        printf("\nEntre com um n�mero: ");
        scanf("%d", &termo);
        soma+=termo;
        printf("Total = %d", soma);
    }while(soma<=20); // Limita o LOOP at� que a SOMA atinja o objetivo
    printf("\nFinal total: %d", soma);
    sleep(3000);
    printf("\n\nRotina usando WHILE"); // In�cio da rotina com WHILE
    soma=0;
    while(soma<=20){ //  Limita o LOOP at� que a SOMA atinja o objetivo
        printf("\nEntre com um n�mero: ");
        scanf("%d", &termo);
        soma+=termo;
        printf("Total = %d", soma);
    } 
    printf("\nFinal total: %d", soma);
    sleep(3000);
    printf("\n\nRotina usando FOR"); // In�cio da rotina com FOR
    for(soma=0;soma<=20;){ //  Limita o LOOP at� que a SOMA atinja o objetivo
        printf("\nEntre com um n�mero: ");
        scanf("%d", &termo);
        soma+=termo;
        printf("Total = %d", soma);
    } 
    printf("\nFinal total: %d", soma);
    sleep(3000);
    printf("\n\nPrograma finalizado.");
    sleep(3000);
    
}
