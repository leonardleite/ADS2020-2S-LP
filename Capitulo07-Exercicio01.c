// ADS 2020 - LINGUAGEM DE PROGRAMA��O
// CAP�TULO 07 - EXERC�CIO 01
/* Fa�a um algor�timo que receba valores inteiros de uma matriz 5x2 e preencha
um vetor inteiro de tamanho 10. Imprima o vetor preenchido.*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<locale.h>
#include<string.h>


main(){
    setlocale(LC_ALL,""); // Configura o terminal para o portugues do Brasil
    system("cls");
    char vetor[10];
    char mmatriz[5][2];
    int i, j, k;
    printf("\nPrograma de leitura de matriz e impressao de vetor.\n\n");
    for(i=0;i<=4;i++){
        for(j=0;j<=1;j++){
            printf("Digite um caracter para a localiza��o %dx%d da matriz: ", i+1, j+1);
            scanf("%s", &mmatriz[i][j]);
            sleep(200);
        }
    }     
    for(i=0, k=0;i<=4;i++){
        for(j=0;j<=1;j++){
            vetor[k] = mmatriz[i][j];
            k++;
        }
    }    
    printf("\nO vetor preenchido �: ");
    puts(vetor); // Comando para imprimir no terminal um VETOR (ARRAY)
    sleep(3000);
    printf("\n\nPrograma Finalizado.");
    sleep(2000);
}
