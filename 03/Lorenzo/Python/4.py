#!/usr/bin/python3

def main():
    palavra = input('Digite um palindromo: ')
    palavraInvertida = palavra[::-1]
    
    if palavra == palavraInvertida: 
        print("eh palindromo")
    else:
        print("nao eh palindromo")
    
        
if __name__ == '__main__': main()