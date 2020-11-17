# ADS 2020 - LINGUAGEM DE PROGRAMAÇÃOO
# CAPÍTULO 05 - EXERCÍCIO 11
''' Criar em linguagem C e utilizando o comando WHILE e / ou DO WHILE
aninhado, um programa conforme imagem abaixo.

1   2   3   4
2   4   6   8
3   6   9  12
4   8  12  16

'''

from time import sleep

print("CAPÍTULO 05 - EXERCÍCIO 11")
print("Utilizando FOR")
for c in range(1, 5, 1):
    for i in range(1, 5, 1):
        produto = i * c
        if produto > 10:
            print(f"  {produto}", end = "")
        else:
            print(f"   {produto}", end = "")
        sleep(0.3)
    sleep(0.2)
    print("")
sleep(0.2)
print("\nUtilizando WHILE")
c = 1
while c < 5:
    i = 1
    while i < 5:
        produto = i * c
        if produto > 9:
            print(f"  {produto}", end = "")
        else:
            print(f"   {produto}", end = "")
        i += 1
        sleep(0.3)
    c += 1
    sleep(0.2)
    print("")
print("\nPrograma Finalizado.")
sleep(0.3)