# ADS 2020 - LINGUAGEM DE PROGRAMAÇÃOO
# CAPÍTULO 05 - EXERCÍCIO 03
''' Criar em linguagem C e utilizando o comando WHILE, um programa que 
imprima as letras de A a Z em um intervalo de um décimo de segundo.'''

import os
from time import sleep
alfa = ('a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z')

def executarNovamente():
    print("Deseja executar novamente?")
    print("[1] - Sim | [2] - Não")
    sair = int(input("Digite sua opção: "))
    while ((sair!=2)and(sair!=1)):
        os.system("cls")
        print("Opção inválida!")
        print("Deseja executar novamente?")
        print("[1] - Sim | [2] - Não")
        sair = int(input("Digite sua opção: ")) 
    return sair

def contagem():
    a=len(alfa)
    for p in range(a-1,-1,-1):
        if (alfa[p]=="z"):
            print(f"{alfa[p]}", end='')
        elif (alfa[p]=="a"):
            print(f", {alfa[p]}.")
        else:
            print(f", {alfa[p]}", end='')
        sleep(0.3)

sair=0
while (sair!=2):
    print("CONTAGEM ALFABÉTICA REGRESSIVA")
    contagem()
    sair=int(executarNovamente())
print("Até mais!!!")
sleep(2)