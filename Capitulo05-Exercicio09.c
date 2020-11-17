// ADS 2020 - LINGUAGEM DE PROGRAMAÇÃO
// CAPÍTULO 05 - EXERCÍCIO 09
/* Criar em linguagem C e utilizando o comando SWITCH, um programa
que identifique se um número é PAR, IMPAR e 0 para sair..*/


#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
#include<time.h>

int parOuImpar(int num); // Declaração da subrotina parOuImpar

main(){
    setlocale(LC_ALL,""); // Configura para o português do brasil
    int numero, resto;
    start:
    system("cls"); // Limpa o terminal
    printf("\nCAPÍTULO 05 - EXERCÍCIO 09\n"); 
    printf("\nDigite o número inteiro que deseja analisar.");
    printf("\nDigite [0] para finalizar a execução: "); 
    scanf("%d", &numero);
    switch (numero){
        case 0:
            goto end; // Manda a rotina para ponto denominado como END
            break;
        default:
            resto=parOuImpar(numero); // Executa a subrotina e retorna o resto
            if(resto==1) printf("\nO número digitado é ímpar.");
            else printf("\nO número digitado é par."); 
            sleep(3000);
            goto start; // Manda a rotina para o ponto denominado como START
    }
    end:
    printf("\nO programa será finalizado.");
    sleep(2000);
}

/* Subrotina parOuImpar
- param: Recebe um valor inteiro NUM.
- param: Retorna um valor inteiro REST
- Proc: Verifica se o resto da divisão de NUM por 2 é 0.
*/
int parOuImpar(num){
    int rest;
    rest = num%2;
    return rest;
}
