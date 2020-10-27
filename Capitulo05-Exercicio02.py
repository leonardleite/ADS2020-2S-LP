# ADS 2020 - LINGUAGEM DE PROGRAMAÇÃO
# CAPÍTULO 05 - EXERCÍCIO 02
# Criar em linguagem C e utilizando o comando WHILE, um programa que imprima na tela os números de 0 a
# 100 em um intervalo de um décimo de segundo

from time import sleep # Importa a função sleep da biblioteca time

# Subrotina EXECUTARNOVAMENTE - Determina se a rotina será finalizada
def executarNovamente():
    print("\nDeseja executar novamente?")
    print("[1] - Sim | [2] - Não")
    sair = int(input("Digite sua opção: "))
    while((sair!=1)and(sair!=2)):
        clrscr()
        print("\nOpção inválida!")
        print("Deseja executar novamente?")
        print("[1] - Sim | [2] - Não")
        sair = int(input("Digite sua opção: "))
    return sair


# Subrotina CONTAGEM - Faz a contagem de 0 a 100
def contagem():
    i = 0
    while (i<=100):
        if (i==0):
            print(f'{i}', end='')
        elif (i==100):
            print(f', {i}.')
        elif ((i%10)==0):
            print(f' ...\n{i}', end='')
        else:
            print(f', {i}', end='')
        i = i + 1
        sleep(0.25)


sair=0
while (sair != 2):
    print("CONTAGEM PROGRESSIVA\n")
    contagem()
    sair = int(executarNovamente())
print("\nAté mais!!!")
sleep(2)
