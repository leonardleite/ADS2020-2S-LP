// Captulo 04 - Exercício 01
/* Criar em linguagem C e utilizando o comando WHILE, um programa que imprima na tela os nï¿½meros de 100
a 0 em um intervalo de um décimo de segundo*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>

int desejasair(); // Subrotina para verificar ser o usuï¿½io deseja finalizar o programa
void contagem(); // Subrotina para imprimir na tela os nï¿½meros de 100 a 0

// Programa principal
main ()
{
    setlocale(LC_ALL,""); // Ajusta a configuraï¿½ï¿½o da linguagem para o protuguï¿½s do Brasil
    system("cls"); // Limpa a tela do terminal
    int sair;
    while(sair!=2) // Comando WHILE utilizado para controlar a execuï¿½ï¿½o da rotina
    {
        contagem(); // Executa a subrotina CONTAGEM();
        sair = desejasair(); // Executa a subrotina DESEJASAIR() e retorna o resultado para a variÃ¡vel sair
    }
    system("cls");
    printf("\n\nPrograma finalizado.");
    sleep(2000); // Pausa a rotina por 2 segundos
}

// Subrotina para verificar se o usuÃ¡rio deseja executar novamente 
int desejasair()
{
    int resposta;
    while((resposta!=1)&&(resposta!=2)) // WHILE utilizado para verificar se o usuï¿½rio digitou a opï¿½ï¿½o correta
    {
        system("cls");
        printf("\nDeseja executar novamente? ");
        printf("\n[1] - Sim");
        printf("\n[2] - Nï¿½o\n");
        scanf("%d", &resposta);
    }
    return resposta;
}

// Subrotina que executa a contagem
void contagem()
{
    system("cls");
    printf("\nCapï¿½tulo 04 - Exercï¿½cio 01\n");
    printf("\nIniciando a contagem :\n");
    int i = 100;
    while (i>=0) // Coordena a contagem regressiva
    {
        switch (i)
        {
        case 100:
            printf("%d", i);
            break;
        case 0:
            printf(", %d.", i);
            break;
        default:
            if((i%10) == 0) printf("...\n%d", i);
            else printf(", %d", i);
            break;
        }
        i--;
        sleep(100);
    }
    sleep(2000);    
}
