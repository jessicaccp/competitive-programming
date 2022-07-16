# -*- coding: utf-8 -*-
# Jessica Cacau | UNICID | @jessicaccp

def main():
    inicio = True
    while True:
        N = int(input())

        if N == 0:
            break
        elif inicio:
            inicio = False
        else:
            print("")
        

        texto = []
        tamanho = 0
        for i in range(0, N):
            entrada = input().strip().split()

            _entrada = ""
            for j in range(0, len(entrada)):
                if j == 0:
                    _entrada += entrada[j]
                else:
                    _entrada += " " + entrada[j]

            texto.append(_entrada)

            if len(_entrada) > tamanho:
                tamanho = len(_entrada)
        
        for i in range(0, N):
            print(texto[i].rjust(tamanho, " "))

if __name__ == "__main__":
    main()