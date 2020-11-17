# ADS 2020 - LINGUAGEM DE PROGRAMAÇÃOO
# CAPÍTULO 05 - EXERCÍCIO 08
''' Criar em linguagem C e utilizando o comando DO WHILE, um programa que identifique se um número é
PAR, IMPAR e 0 para sair.'''

from time import sleep

def par_ou_impar(num):
    n = num % 2
    return n

print("CAPÍTULO 05 - EXERCÍCIO 08")
numero = 1
while numero != 0
    print("\nDigite o valor que deseja analisar.")
    numero = int(input("Digite [0] para sair: "))
    resto = par_ou_impar(numero)
    if resto==0:
        print("O número digitado é par.")
    else:
        print("O número digitado é ímpar.")
    sleep(2)
print("\nPrograma finalizado.")
sleep(3)