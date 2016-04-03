#!/usr/bin/python3

def main():
    frase = input('Digite uma frase: ')
    palavra = input('Digite a palavra a ser buscada na frase: ')
    
    if frase.find(palavra) < 0:
        print('errrouuu!!!!')
    else:
        print(frase.index(palavra))
        
if __name__ == '__main__': main()