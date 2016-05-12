# -*- coding: utf-8 -*-
'''
/* Escreva um programa que leia via e imprima na tela um vetor X de 10
elementos. O programa deve imprimir um vetor Y obtido pela inversão da
ordem de 10 elementos de X.  */

'''
X = [] * 10
print("Insira 10 valores")
for i in range(10):
    n = float(input())
    X.append(n)

print("Vetor original:")
print(X)

j = 9
Y = [] * 10

for i in range(10):
    Y.append(X[j])
    j -= 1
print("Vetor invertido:")
print(Y)
