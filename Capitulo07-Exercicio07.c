// ADS 2020 - LINGUAGEM DE PROGRAMA��O
// CAP�TULO 07 - EXERC�CIO 07
/* Preencher um vetor com n�meros inteiros (8 unidades); Solicitar um n�mero no 
teclado. Pesquisar se este n�mero existe no vetor. S existir, imprimir em qual
posi��o do vetor e qual ordem foi digitado. Se n�o existir, imprimir a MSD
que n�o existe*/

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
    printf("// CAP�TULO 07 - EXERC�CIO 07 - Preencher um vetor com n�meros");
    printf("\ninteiros (8 unidades); Solicitar um n�mero no teclado.");
    printf("\nPesquisar se este n�mero existe no vetor. Se existir, imprimir");
    printf("\nem qual posi��o do vetor e qual ordem foi digitado. Se n�o");
    printf("\nexistir, imprimir a MSG que n�o existe");
    printf("\n");
    int num[8];
    int n, tam; // Controla a posi��o e o tamanho do vetor
    int i; // Controla o LOOP
    int escolha; //Numero escolhido pelo usuario
    bool acerto = false;
    
    //Determinar o vetor
    for(n=0;n<8;n++){
        num[n]=rand()%10;
    }
    
    printf("\nDigite o n�mero de 1 d�gito que deseja verificar: ");
    scanf("%1d",&escolha);
    
    // Verifica se o n�mero escolhido est� no vetor
    for(tam=8,i=0;i<tam;i++){
        if(num[i]==escolha){
            printf("\n\nO n�mero %d esta na posi��o de n�mero %d no vetor ", escolha, i+1);
            for(n=0;n<tam;n++){
                printf("%d", num[n]);
            }
            printf(".\n\nA ordem do vetor � a seguinte:");
            for(n=0;n<tam;n++){
                printf("\nNa posi��o %d temos %d", n+1, num[n]);
            }
            acerto=true;
            break;
        }
    }
    sleep(2000);
    // Caso o n�mero escolhido n�o esteja no vetor
    if(acerto==false){
        printf("\nO numero %d n�o esta no vetor ", escolha);
        for(n=0;n<tam;n++){
            printf("%d", num[n]);
        }
    }
    sleep(2000);
    printf("\n\nPrograma Finalizado.");
    sleep(5000);
}
