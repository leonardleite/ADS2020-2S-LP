// ADS 2020 - LINGUAGEM DE PROGRAMA��O
// CAP�TULO 07 - EXERC�CIO 03
/* Solicitar um nome e mostrar a primeira, ultima, a quarta, da primeiro �
terceira, da primeira � ultima. Mostrar a posi��o de cada letra no vetor.*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<locale.h>
#include<string.h>

main(){
    setlocale(LC_ALL,"");
    system("cls");
    printf("\nCAP�TULO 07 - EXERC�CIO 03 - Solicitar um nome e mostrar a \nprimeira, �ltima, a quarta, da primeiro � terceira, da primeira � \n�ltima. Mostrar a posi��o de cada letra no vetor.");
    printf("\n\n");
    char nome[100];
    int n, tam;
    printf("Digite o nome com no m�ximo 100 caracteres: ");
    gets(nome);
    tam=strlen(nome);
    printf("\n\nA primeira letra � %c.", nome[0]);
    sleep(2000);
    printf("\n\nA �ltima letra � %c.", nome[(tam-1)]);
    sleep(2000);
    printf("\n\nA quarta letra � %c.", nome[3]);
    printf("\n");
    sleep(2000);
    for(n=0;n<=2;n++){
        printf("\nNa posi��o %2d temos a letra %c.", n+1, nome[n]);
        sleep(1000);
    }
    printf("\n");
    sleep(2000);
    for(n=0;n<tam;n++){
        printf("\nNa posi��o %2d temos a letra %c.", n+1, nome[n]);
        sleep(1000);
    }
    sleep(2000);
    printf("\n\nPrograma Finalizado.");
    sleep(3000);
}
