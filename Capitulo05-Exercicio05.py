# ADS 2020 - LINGUAGEM DE PROGRAMAÇÃOO
# CAPÍTULO 05 - EXERCÍCIO 05
''' Criar em linguagem C utilizando o comando WHILE, um programa que
imprima uma palavra infinitamente, até que uma tecla seja pressionada'''

from pynput.keyboard import Listener, Key
from time import sleep

def press(key):
    global sair
    sair = True

with Listener(on_press=press) as keyb:
    keyb.join()
print("CAPÍTULO 05 - EXERCÍCIO 05")
while sair == False:
    print("Fatec, ")
    sleep(0.5)