# -*- coding: utf-8 -*-
'''
1. Desenvolva um programa em C que leia um conjunto X com N elementos reais e
que calcule a diferença entre o maior e o menor elemento existente, além de
indicar as posições em que eles ocorrem.
'''

N = int(input("Digite um valor:"))
print(N)
X = []

for i in range(N):
    num = float(input("Digite uma nota:"))
    X.append(num)

for i in range(N):
    if (i == 0):
        maior = X[i]
        menor = X[i]

    if(X[i] >= maior):
        maior = X[i]
        posmaior = i

    if(X[i] <= menor):
        menor = X[i]
        posmenor = i

dif = maior - menor
print("Maior valor: {:.2f}, na posição {:d}" .format(maior, posmaior))
print("Menor valor: {:.2f}, na posição {:d}" .format(menor, posmenor))
print("Diferença dos valores: '{:.2f}'" .format(dif))
