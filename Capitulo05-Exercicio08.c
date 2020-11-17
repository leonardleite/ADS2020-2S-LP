// ADS 2020 - LINGUAGEM DE PROGRAMA��O
// CAP�TULO 05 - EXERC�CIO 08
/* Criar em linguagem C e utilizando o comando DO WHILE, um programa
que identifique se um n�mero � PAR, IMPAR e 0 para sair..*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
#include<time.h>

int parOuImpar(int num); // Declara��o da subrotina parOuImpar

main(){
    setlocale(LC_ALL,""); // Configura para o portugu�s do brasil
    int numero, resto;
    do{ // Inicia o LOOP
        system("cls"); // Limpa o terminal
        printf("\nCAP�TULO 05 - EXERC�CIO 08\n"); 
        printf("\nDigite o n�mero inteiro que deseja analisar.");
        printf("\nDigite [0] para finalizar a execu��o: "); 
        scanf("%d", &numero);
        switch (numero){
            case 0:
                break;
            default:
                resto=parOuImpar(numero); // Executa a subrotina e retorna o resto
                if(resto==1) printf("\nO n�mero digitado � �mpar.");
                else printf("\nO n�mero digitado � par."); 
                sleep(3000);
        }
    } while (numero!=0); // Executo o LOOP enquanto n�o for digitado 0
    printf("\nO programa ser� finalizado.");
    sleep(2000);
}

/* Subrotina parOuImpar
- param: Recebe um valor inteiro NUM.
- param: Retorna um valor inteiro REST
- Proc: Verifica se o resto da divis�o de NUM por 2 � 0.
*/
int parOuImpar(num){
    int rest;
    rest = num%2;
    return rest;
}
