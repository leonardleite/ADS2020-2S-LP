# ADS 2020 - LINGUAGEM DE PROGRAMAÇÃOO
# CAPÍTULO 05 - EXERCÍCIO 11
''' Criar em linguagem e utilizando o comando WHILE ou DO WHILE, um programa que peça números ao
usuário até que a soma de todos os números digitados for pelo menos 20.

'''

from time import sleep

print("CAPÍTULO 05 - EXERCÍCIO 11")
print("\nTotal = 0")
total = 0
while total <= 20:
    termo = int(input("Entre com um número: "))
    total += termo
    print(f"Total = {total}")
    sleep(0.2)
print("Programa finalizado")
sleep(2)
