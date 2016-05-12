# -*- coding: utf-8 -*-
'''
2. Monte um programa onde o usuário entra com o valor das diversas notas
alcançadas por uma turma de alunos. O programa inicia perguntando o tamanho
da turma e parte para a entrada de dados. A seguir, o programa deve ser capaz de
exibir um histograma na tela, além de outras informações, conforme é mostrado
à seguir. Cada estrela é a quantidade de alunos em cada faixa de notas
'''

N = int(input("Digite o tamanho da turma:"))
print(N)
notas = []

total = 0

for i in range(N):
    nota = float(input("Digite uma nota:"))
    notas.append(nota)
    total += nota


media = total / N

for i in range(N):
    if (i == 0):
        maior = notas[i]
        menor = notas[i]

    if(notas[i] >= maior):
        maior = notas[i]
        posmaior = i

    if(notas[i] <= menor):
        menor = notas[i]
        posmenor = i

print("Resultado da avaliação da TURMA A")
print("     Maior nota: {:.2f}" .format(maior))
print("     Menor nota: {:.2f}" .format(menor))
print("Média das notas: {:.2f}" .format(media))

print("Histograma das notas:")

j = 0.0
k = 3.0

for i in range(8):
    print("{:.2f} ~ {:.2f}: " .format(j, k), end="")
    for l in range(N):
        if((notas[l] <= k) & (notas[l] > j)):
            print("*", end="")
    if(i == 0):
        j += 3.1
    else:
        j += 1.0
    k += 1
    print("")
