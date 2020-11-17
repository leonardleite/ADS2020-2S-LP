# ADS 2020 - LINGUAGEM DE PROGRAMAÇÃOO
# CAPÍTULO 05 - EXERCÍCIO 10
''' Criar em linguagem C e utilizando o comando WHILE e / ou DO WHILE
aninhado, um programa conforme imagem abaixo.

*
**
***
****
*****
******
*******

'''

from time import sleep

print("CAPÍTULO 05 - EXERCÍCIO 10")
print("Utiluzando FOR")
for c in range(1,8,1):
    print("*" * c)
    sleep(0.5)
print("\nUtilizando WHILE")
c = 1
while c < 8:
    print("*" * c)
    sleep(0.5)
    c += 1
print("\nProgramada finalizado.")
sleep(2)