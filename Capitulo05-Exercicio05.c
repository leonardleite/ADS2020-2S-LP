// ADS 2020 - LINGUAGEM DE PROGRAMAÇÃO
// CAPÍTULO 05 - EXERCÍCIO 04
/* Criar em linguagem C utilizando o comando WHILE, um programa que imprima uma palavra infinitamente,
até que uma tecla seja pressionada*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
#include<time.h>

main()
{
    setlocale(LC_ALL,""); // Configura a linguagem para o protugues do Brasil
    system("cls"); // Limpa a tela do terminal.
    while(!kbhit()) // Repete a rotina até que uma tecla seja precionada.
    {
        printf(" ... Repita ");
        sleep(250);
    }
    printf("\n\nFoi precionada uma tecla ...\nAté mais!!!");
    sleep(2000);
    
}
