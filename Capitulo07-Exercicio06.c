// ADS 2020 - LINGUAGEM DE PROGRAMA��O
// CAP�TULO 07 - EXERC�CIO 06
/* Preencher um vetor com 3 nomes e mostrar quantas letras A e E tem nos nomes*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<locale.h>
#include<string.h>
#include<math.h>

main(){
    setlocale(LC_ALL,"");
    system("cls");
    printf("CAP�TULO 07 - EXERC�CIO 06 - Preencher um vetor com 3 nomes e ");
    printf("\nmostrar quantas letras A e E tem nos nomes");
    printf("\n");
    char nome[3][50];
    int n, m; // Vari�veis de controle de LOOP
    int num_a, num_e; // Quantidade de letras A e E
    int tam; // Verifica o tamanho do nome
    // Leitura e grava��o dos nomes
    for(n=0;n<=2;n++){
        printf("\nDigite o nome de n�mero %d: ", n+1);
        gets(nome[n]);
    }
    // Verifica��o da quantidade de letras A e E
    num_a = num_e = 0;
    for(n=0;n<=2;n++){
        tam=strlen(nome[n]);
        for(m=0;m<tam;m++){
            switch(nome[n][m]){
                case 'a':
                    num_a++;
                    break;
                case 'e':
                    num_e++;
                    break;   
            }
        }
    }
    printf("\nOs nomes possuem %d letras A e %d letras E.", num_a, num_e);
    sleep(2000);
    printf("\n\nPrograma Finalizado");
    sleep(9000);
}
