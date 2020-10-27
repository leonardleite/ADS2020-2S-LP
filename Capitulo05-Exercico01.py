# ADS 2020 - LINGUAGEM DE PROGRAMAÇÃO
# CAPÍTULO 05 - EXERCÍCIO 02
# Criar em linguagem C e utilizando o comando WHILE, um programa que imprima na tela os números de 100 a
# 0 em um intervalo de um décimo de segundo

from time import sleep

def contagem():
    i = 100
    while i>= 0:
        if i == 100:
            print(f'{i}', end='')
        elif i == 0:
            print(f', {i}.')
        elif (i%10)==0:
            print(f' ... \n{i}', end='')
        else:
            print(f', {i}', end='')
        
        i=i-1
        sleep(1)




def executarNovamente():
    print('\nDeseja executar novamente?')
    sair=int(input('\n[1] - Sim | [2] - Não \nDigite sua opção: '))
    return sair



while True:
    print('\n\nADS 2020 - LINGUAGEM DE PROGRAMAÇÃO')
    print('\nCapítulo 05 - Exercício 01')
    print()
    contagem()
    continuar = int(executarNovamente())
    if continuar == 2: break