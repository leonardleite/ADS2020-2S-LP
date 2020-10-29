// ADS 2020 - LINGUAGEM DE PROGRAMAÇÃO
// CAPÍTULO 05 - EXERCÍCIO 04
/* Criar em linguagem C e utilizando o comando DO WHILE, que imprima a palavra FATEC o número
de vezes que for digitado em um intervalo de um segundo.*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
#include<time.h>

main()
{
    setlocale(LC_ALL,""); // Configura para o portugues do Brasil
    system("cls");
    int n; // Numero de vezes da impressao
    printf("\nCAPÍTULO 05 - EXERCÍCIO 04\n");
    printf("\nDigite a quantidade de vezes que deseja imprimir FATEC: ");
    scanf("%d", &n);
    printf("\n");
    int i = 1; // Controle do laco
    while(n>=i)
    {
        if(((i%5)==0)&&(i!=0))printf(" ... FATEC ...\n");
        else printf(" ... FATEC");
        sleep(1000);
        i++;
    }
    if(((i%5)==0)&&(i!=0))printf("\n");
    else printf(" ... \n");    
    printf("\nAte mais!!!");
    sleep(2000);
}
