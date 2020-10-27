// ADS 2020 - LINGUAGEM DE PROGRAMAÇÃO
// CAPÍTULO 05 - EXERCÍCIO 02
/* Criar em linguagem C e utilizando o comando WHILE, um programa que imprima na tela os números de 0 a
100 em um intervalo de um décimo de segundo*/

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
    while(sair!=2) // Loop da rotina principal para manter o programa em execução
    {
        system("cls");
        printf("\nCONTAGEM PROGRESSIVA\n\n");
        contagem(); // 
        sair = executarNovamente();              
    }
    printf("\n\nAté mais!!!");
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

// Subrotina EXECUTARNOVAMENTE - Decisão de encerrar o programa
int executarNovamente()
{
    int sair;
    printf("\n\nDeseja executar novamente?");
    printf("\n[1] - Sim | [2] - Não");
    scanf("%d", &sair);
    while ((sair!=1)&&(sair!=2))
    {
        system("cls");
        printf("Opção inválida");
        printf("\nDeseja executar novamente?");
        printf("\n[1] - Sim | [2] - Não");
        scanf("%d", &sair);
    }
    return sair;
}
