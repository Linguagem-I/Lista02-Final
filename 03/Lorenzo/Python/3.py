#!/usr/bin/python3

def main():
    frase = input('Digite uma frase: ')
    caracter = input('Digite um caracter: ')
    
    frase = frase.replace(caracter, '*')
    frase = frase.replace('e', '3')
    
    print(frase)
         
if __name__ == '__main__': main()