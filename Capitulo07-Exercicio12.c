// ADS 2020 - LINGUAGEM DE PROGRAMAÇÃO
// CAPÍTULO 07 - EXERCÍCIO 12
/* Neste exercicio temos dois vetores com 5 posições. Em cada vetor entraremos
com cinco números. Mostrar os números e depois somar os números que pertecem a 
mesma posição*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

main(){
    setlocale(LC_ALL,"");
    system("cls");
    srand((unsigned)time(NULL));
    
    //Declaração de variáveis
    char nome[6][33];
    float nota_p1[6];
    float nota_p2[6];
    float media[6];
    char situacao[6][10];
    int i, opcao;
    
    // Cadastro dos alunos
    for(i=0;i<6;i++){
        printf("\nDigite o nome do %dº aluno: ",i+1);
        gets(nome[i]);
        sleep(500);
    }
    
    // Decisão de automatizar as notas  
    opcao=0;
    do{
        printf("\n\nDeseja digitar as notas dos alunos ou prefere que o computador digite:");
        printf("\nDigite [1] para inserir as notas ou [2] para automatiza-las: ");
        scanf("%d",&opcao);
        if((opcao!=1)&&(opcao!=2))printf("Opção digitada incorreta!");
        sleep(1000);
    } while ((opcao!=1)&&(opcao!=2));
    
    printf("a");
    
    // Inserção das notas
    for(i=0;i<6;i++){
         if(opcao==1){
             printf("\nDigite a primeira nota do aluno %s: ",nome[i]);
             scanf("%f",&nota_p1[i]);
             printf("\nDigite a segunda nota do aluno %s: ",nome[i]);         
             scanf("%f",&nota_p2[i]);
         } else{
             nota_p1[i]=rand()%10;
             nota_p2[i]=rand()%10;
         }
    }
    
    // Cálculo da média e situação
    for(i=0;i<6;i++){
        media[i]=(nota_p1[i]+nota_p2[i])/2;
        if(media[i]>=5) strcpy(situacao[i],"Aprovado");
        else strcpy(situacao[i],"Reprovado");
    }
    
    // Impressão de dados na tela
    for(i=0;i<6;i++){
        printf("\n");
        printf("\nDados do aluno ");
        puts(nome[i]);
        sleep(500);
        printf("\nNota da primeira prova: %.1f",nota_p1[i]);
        sleep(500);
        printf("\nNota da segunda prova: %.1f",nota_p2[i]); 
        sleep(500);
        printf("\nMedia: %.1f",media[i]);
        sleep(500);
        printf("\nSituação: ");
        puts(situacao[i]);
        sleep(2000);
    }
    
    printf("\n\nPrograma Encerrado.");
    sleep(5000);

}
