// ADS 2020 - LINGUAGEM DE PROGRAMAÇÃO
// CAPÍTULO 07 - EXERCÍCIO 08
/* Preencher um vetor com os números pares de 2 a 20. Preencher outro vetor com
os números de 10 a 19. Somar os vetores acima*/

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
    int vetor1[10];
    int vetor2[10];
    int n, i; // Variáveis de controle do LOOP e do índice do vetor
    int soma;
    printf("Preencher um vetor com os números pares de 2 a 20. Preencher outro");
    printf("\nvetor comos números de 10 a 19. Somar os vetores acima\n");
    
    // Vetor com os pares de 2 a 20
    for(n=2, i=0;n<=20;n+=2,i++){
        vetor1[i]=n;
    }
    
    // Vetor com os números de 10 a 19
    for(n=10, i=0;n<=20;n++,i++){
        vetor2[i]=n;
    }
    
    //Soma dos vetores
    for(n=0, soma=0;n<10;n++){
        printf("\n%3d ",soma);
        soma += vetor1[n];
        printf("+ %2d + %2d = ", vetor1[n],vetor2[n]);
        soma += vetor2[n];
        printf("%3d",soma);
        sleep(1000);
    }
    
    printf("\n\nA soma dos números é %d", soma);
    sleep(3000);
    printf("\n\nPrograma Finalizado.");
    sleep(3000);
    
}
