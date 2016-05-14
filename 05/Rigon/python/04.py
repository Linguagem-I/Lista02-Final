# -*- coding: utf-8 -*-
'''
/* Crie dois vetores com o “nome” e o “salário” de 5 vendedores de uma loja de
calçados. A seguir efetue vendas, informando o código (índice do vetor do
vendedor), e guarde em um terceiro vetor chamado “vendas”. Ao final calcule o
total de vendas de cada vendedor e a sua comissão, mostrando o salário final de
cada vendedor, tendo como base que cada vendedor recebe R$ 20 reais por
calçado vendido.    */
'''
vendedor = [0] * 5
salario = [0] * 5
vendas = [0] * 5
vendendo = 1
print("Insira o nome e o salário dos vendedores")
for i in range(5):
    vendedor[i] = input("Vendedor:")
    salario[i] = float(input("Salário:"))
print("Todos nomes foram adicionados")
print("Cadastro das vendas!")
while True:
    indice = int(input("Código do vendedor:")) - 1
    if(indice == -1):
        break
    totalvendas = int(input("Vendas do vendedor:"))  # recebe o total de vendas
    vendas.insert(indice, totalvendas)

print("----- Relatório final das vendas:")
for i in range(5):
    print("Vendedor: %5s Comissão por Vendas: %i Salário Total: %.2f" % (vendedor[i], (vendas[i] * 20), (salario[i] + (vendas[i] * 20))))
