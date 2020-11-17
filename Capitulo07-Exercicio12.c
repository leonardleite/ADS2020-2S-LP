// ADS 2020 - LINGUAGEM DE PROGRAMA��O
// CAP�TULO 07 - EXERC�CIO 12
/* Neste exercicio temos dois vetores com 5 posi��es. Em cada vetor entraremos
com cinco n�meros. Mostrar os n�meros e depois somar os n�meros que pertecem a 
mesma posi��o*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

main(){
    setlocale(LC_ALL,"");
    system("cls");
    srand((unsigned)time(NULL));
    
    //Declara��o de vari�veis
    char nome[6][33];
    float nota_p1[6];
    float nota_p2[6];
    float media[6];
    char situacao[6][10];
    int i, opcao;
    
    // Cadastro dos alunos
    for(i=0;i<6;i++){
        printf("\nDigite o nome do %d� aluno: ",i+1);
        gets(nome[i]);
        sleep(500);
    }
    
    // Decis�o de automatizar as notas  
    opcao=0;
    do{
        printf("\n\nDeseja digitar as notas dos alunos ou prefere que o computador digite:");
        printf("\nDigite [1] para inserir as notas ou [2] para automatiza-las: ");
        scanf("%d",&opcao);
        if((opcao!=1)&&(opcao!=2))printf("Op��o digitada incorreta!");
        sleep(1000);
    } while ((opcao!=1)&&(opcao!=2));
    
    printf("a");
    
    // Inser��o das notas
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
    
    // C�lculo da m�dia e situa��o
    for(i=0;i<6;i++){
        media[i]=(nota_p1[i]+nota_p2[i])/2;
        if(media[i]>=5) strcpy(situacao[i],"Aprovado");
        else strcpy(situacao[i],"Reprovado");
    }
    
    // Impress�o de dados na tela
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
        printf("\nSitua��o: ");
        puts(situacao[i]);
        sleep(2000);
    }
    
    printf("\n\nPrograma Encerrado.");
    sleep(5000);

}
