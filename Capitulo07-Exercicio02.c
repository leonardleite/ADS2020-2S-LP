// ADS 2020 - LINGUAGEM DE PROGRAMA��O
// CAP�TULO 07 - EXERC�CIO 02
/* Preencher um vetor com 6 n�meros e mostrar na tela.*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<locale.h>
#include<string.h>


main(){
    setlocale(LC_ALL,""); // Configura o terminal para o portugues do Brasil
    system("cls");
    char vetor[6];
    int i;
    printf("\nPrograma de leitura de vetores.\n\n");
    for(i=0;i<=5;i++){
        printf("Digite um n�mero inteiro para o �ndice %2d: ", i+1);
        scanf("%s", &vetor[i]);
        sleep(200);
    }     
    printf("\nO vetor preenchido �: ");
    puts(vetor); // Comando para imprimir no terminal um VETOR (ARRAY)
    sleep(3000);
    printf("\n\nPrograma Finalizado.");
    sleep(2000);
}
