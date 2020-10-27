// ADS 2020 - LINGUAGEM DE PROGRAMA��O
// CAP�TULO 05 - EXERC�CIO 04
/* Criar em linguagem C e utilizando o comando WHILE, um programa que 
imprima as letras de Z a A em um intervalo de um d�cimo de segundo.*/


// Incluir as bibliotecas
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<time.h>

void contagem();
int executarNovamente();

main()
{
    setlocale(LC_ALL,"");
    int sair;
    while (sair!=2)
    {
        system("cls");
        printf("\nCONTAGEM REGRESSIVA ALFAB�TICA\n");
        contagem();
        sair = executarNovamente();
    }

    printf("\nAt� mais!!!");
    sleep(2000);
}

void contagem() // Realiza a contagem regressiva do alfabeto
{
    char alfa = 'z';
    printf("\n");
    while (alfa>='a')
    {
        switch (alfa)
        {
            case 'z':
                printf("%c", alfa);
                break;
            case 'a':
                printf(", %c.", alfa); 
                break;
            default:
                printf(", %c", alfa);
                break;
        }
        alfa--;
        sleep(200);
    }
}

//Subrotina verifica se o usu�rio deseja executar novamente a rotina principal
int executarNovamente()
{
    int sair = 0;
    printf("\n\nDeseja executar novamente?");
    printf("\n[1] - Sim | [2] - N�o");
    printf("\nDigite sua op��o: ");
    scanf("%d", &sair);
    while ((sair!=2)&&(sair!=1))
    {
        system("cls");
        printf("\n\nOp��o inv�ilida");
        printf("\nDeseja executar novamente?");
        printf("\n[1] - Sim | [2] - N�o");
        printf("\nDigite sua op��o: ");
        scanf("%d", &sair);
    }
    return sair;
}
