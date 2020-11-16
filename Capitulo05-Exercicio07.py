# ADS 2020 - LINGUAGEM DE PROGRAMAÇÃOO
# CAPÍTULO 05 - EXERCÍCIO 07
''' Criar em linguagem C e utilizando o comando DO WHILE, um programa que imprima uma
contagem regressiva do numero que você digitar.'''

from time import sleep

print("\nCAPÍTULO 05 - EXERCÍCIO 07")
num = int(input("\nDigite o número que deseja iniciar a contagem regressiva: "))
n = num
print("\nUtilizando WHILE")
while n >= 0:
    if n !=0:
        print(f"{n}, ", end="")
    else:
        print(f"{n}.")
    n -= 1
    sleep(0.5)
sleep(1)
print("\nUtilizando FOR")
n = num
for i in range(n, -1,-1):
    if i != 0:
        print(f"{i}, ", end="")
    else:
        print(f"{i}.")
    sleep(0.5)
sleep(1)
print("\nPrograma Finalizado.")
sleep(2)