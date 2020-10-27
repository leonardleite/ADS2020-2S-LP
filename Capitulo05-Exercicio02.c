// ADS 2020 - LINGUAGEM DE PROGRAMA��O
// CAP�TULO 05 - EXERC�CIO 02
/* Criar em linguagem C e utilizando o comando WHILE, um programa que imprima na tela os n�meros de 0 a
100 em um intervalo de um d�cimo de segundo*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>


void contagem();
int executarNovamente();

// Rotina principal
main()
{
    setlocale(LC_ALL,""); // Configura a linguagem para o portugues do Brasil
    int sair;
    while(sair!=2) // Loop da rotina principal para manter o programa em execu��o
    {
        system("cls");
        printf("\nCONTAGEM PROGRESSIVA\n\n");
        contagem(); // 
        sair = executarNovamente();              
    }
    printf("\n\nAt� mais!!!");
    sleep(2000); // Exibe a mensagem acima por 2 segundos e encerra a rotina
}

// Subrotina CONTAGEM - Faz a contagem
void contagem()
{
    int i = 0;
    while (i<=100)
    {
        switch (i)
        {
        case 0:
            printf("%d", i);
            break;
        case 100:
            printf(", %d.", i);
            break;
        default:
            if ((i%10)==0) printf("...\n%d", i);
            else printf(", %d", i);
            break;
        }
    i++;
    sleep(100);
    }
}

// Subrotina EXECUTARNOVAMENTE - Decis�o de encerrar o programa
int executarNovamente()
{
    int sair;
    printf("\n\nDeseja executar novamente?");
    printf("\n[1] - Sim | [2] - N�o");
    scanf("%d", &sair);
    while ((sair!=1)&&(sair!=2))
    {
        system("cls");
        printf("Op��o inv�lida");
        printf("\nDeseja executar novamente?");
        printf("\n[1] - Sim | [2] - N�o");
        scanf("%d", &sair);
    }
    return sair;
}
