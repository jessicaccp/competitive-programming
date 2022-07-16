# -*- coding: utf-8 -*-
# Jessica Cacau | UNICID | @jessicaccp

def main():
    lista = []

    for i in range(0, 4):
        entrada = input()
        lista.append(entrada)
    
    N = len(lista[0]) - 2

    F = ""
    L = ""
    for i in range(0, 4):
        F += lista[i][0]
        L += lista[i][N + 1]
    F = int(F)
    L = int(L)

    saida = ""
    for i in range(1, N + 1):
        M = ""
        for j in range(0, 4):
            M += lista[j][i]
        M = int(M)

        C = (F * M + L) % 257
        saida += chr(C)
    
    print(saida)

if __name__ == "__main__":
    main()