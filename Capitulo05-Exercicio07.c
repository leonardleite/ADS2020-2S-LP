// ADS 2020 - LINGUAGEM DE PROGRAMAÇÃO
// CAPÍTULO 05 - EXERCÍCIO 07
/* Criar em linguagem C e utilizando o comando DO WHILE, um programa que imprima uma
contagem regressiva do numero que você digitar.*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
#include<time.h>

main()
{
    setlocale(LC_ALL,""); // Configura para o portugues do Brasil
    int n; // Numero do inicio da contagem, solicitado ao usuario 
    do
    {
        system("cls");
        printf("\nCAPÍTULO 05 - EXERCÍCIO 07\n");
        printf("\nDigite um numero maior que 0 para iniciar a contagem regressiva: ");
        scanf("%d", &n);
        if(n<=0) printf("Numero incorreto!\nTente novamente.");
        sleep(2000);
    } while (n<=0);
    printf("\n");
    int i = n; // Variavel de controle
    do
    {
        switch (i)
        {
            case 0:
                printf("%d.", i);
                break;
            default:
                if ((i%10)==0) printf("%d ...\n", i);
                else printf("%d, ", i);    
        }
        i--;
        sleep(500);
    } while (i>=0);
    printf("\n\nAte mais!!!");
    sleep(3000);
}
