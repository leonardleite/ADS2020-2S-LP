# ADS 2020 - LINGUAGEM DE PROGRAMAÇÃOO
# CAPÍTULO 05 - EXERCÍCIO 06
''' Criar em linguagem  e utilizando o comando DO WHILE, que imprima a palavra FATEC o número
de vezes que for digitado em um intervalo de um segundo.'''

from pynput.keyboard import key, Controller
from time import sleep

print("CAPÍTULO 05 - EXERCÍCIO 06")
print("")
num = int(input("Digite a quantidade de vezes que deseja imprimir FATEC: "))
c = 1
n = num
print("\nUtilizando WHILE")
while c <= num:
    print("FATEC, ", end="")
    c = c + 1
    sleep(1)
n = num
print("")
print("\n Utilizando FOR")
for n in range(0, n):
    print("FATEC, ", end="")
    sleep(0.5)
    n -= 1
print("")
print("\nPrograma finalizado.")