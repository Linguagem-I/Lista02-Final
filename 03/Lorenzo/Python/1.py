#!/usr/bin/python3

def main():
    caracter = input('Digite um caracter: ')
    
    if caracter.isalpha() == True:
        print("Congratulations! voce digitou uma letra")
    else:
        print("ERRROOOOUUU!!!")
         
if __name__ == '__main__': main()