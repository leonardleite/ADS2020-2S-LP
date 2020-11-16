// ADS 2020 - LINGUAGEM DE PROGRAMAÇÃO
// CAPÍTULO 07 - EXERCÍCIO 03
/* Solicitar um nome e mostrar a primeira, ultima, a quarta, da primeiro à
terceira, da primeira à ultima. Mostrar a posição de cada letra no vetor.*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<locale.h>
#include<string.h>

main(){
    setlocale(LC_ALL,"");
    system("cls");
    printf("\nCAPÍTULO 07 - EXERCÍCIO 03 - Solicitar um nome e mostrar a \nprimeira, última, a quarta, da primeiro à terceira, da primeira à \núltima. Mostrar a posição de cada letra no vetor.");
    printf("\n\n");
    char nome[100];
    int n, tam;
    printf("Digite o nome com no máximo 100 caracteres: ");
    gets(nome);
    tam=strlen(nome);
    printf("\n\nA primeira letra é %c.", nome[0]);
    sleep(2000);
    printf("\n\nA última letra é %c.", nome[(tam-1)]);
    sleep(2000);
    printf("\n\nA quarta letra é %c.", nome[3]);
    printf("\n");
    sleep(2000);
    for(n=0;n<=2;n++){
        printf("\nNa posição %2d temos a letra %c.", n+1, nome[n]);
        sleep(1000);
    }
    printf("\n");
    sleep(2000);
    for(n=0;n<tam;n++){
        printf("\nNa posição %2d temos a letra %c.", n+1, nome[n]);
        sleep(1000);
    }
    sleep(2000);
    printf("\n\nPrograma Finalizado.");
    sleep(3000);
}
