// ADS 2020 - LINGUAGEM DE PROGRAMAÇÃO
// CAPÍTULO 07 - EXERCÍCIO 07
/* Preencher um vetor com números inteiros (8 unidades); Solicitar um número no 
teclado. Pesquisar se este número existe no vetor. S existir, imprimir em qual
posição do vetor e qual ordem foi digitado. Se não existir, imprimir a MSD
que não existe*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<locale.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>

main(){
    srand((unsigned)time(NULL));
    setlocale(LC_ALL,"");
    system("cls");
    printf("// CAPÍTULO 07 - EXERCÍCIO 07 - Preencher um vetor com números");
    printf("\ninteiros (8 unidades); Solicitar um número no teclado.");
    printf("\nPesquisar se este número existe no vetor. Se existir, imprimir");
    printf("\nem qual posição do vetor e qual ordem foi digitado. Se não");
    printf("\nexistir, imprimir a MSG que não existe");
    printf("\n");
    int num[8];
    int n, tam; // Controla a posição e o tamanho do vetor
    int i; // Controla o LOOP
    int escolha; //Numero escolhido pelo usuario
    bool acerto = false;
    
    //Determinar o vetor
    for(n=0;n<8;n++){
        num[n]=rand()%10;
    }
    
    printf("\nDigite o número de 1 dígito que deseja verificar: ");
    scanf("%1d",&escolha);
    
    // Verifica se o número escolhido está no vetor
    for(tam=8,i=0;i<tam;i++){
        if(num[i]==escolha){
            printf("\n\nO número %d esta na posição de número %d no vetor ", escolha, i+1);
            for(n=0;n<tam;n++){
                printf("%d", num[n]);
            }
            printf(".\n\nA ordem do vetor é a seguinte:");
            for(n=0;n<tam;n++){
                printf("\nNa posição %d temos %d", n+1, num[n]);
            }
            acerto=true;
            break;
        }
    }
    sleep(2000);
    // Caso o número escolhido não esteja no vetor
    if(acerto==false){
        printf("\nO numero %d não esta no vetor ", escolha);
        for(n=0;n<tam;n++){
            printf("%d", num[n]);
        }
    }
    sleep(2000);
    printf("\n\nPrograma Finalizado.");
    sleep(5000);
}
