#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int pos (char letra) {
    switch (letra) {
        case 'A':
            return 0;
        case 'B':
            return 1;
        case 'C':
            return 2;
        case 'D':
            return 3;
        case 'E':
            return 4;
        case 'F':
            return 5;
        case 'G':
            return 6;
        case 'H':
            return 7;
        case 'I':
            return 8;
        case 'J':
            return 9;
        case 'K':
            return 10;
        case 'L':
            return 11;
        case 'M':
            return 12;
        case 'N':
            return 13;
        case 'O':
            return 14;
        case 'P':
            return 15;
        case 'Q':
            return 16;
        case 'R':
            return 17;
        case 'S':
            return 18;
        case 'T':
            return 19;
        case 'U':
            return 20;
        case 'V':
            return 21;
        case 'W':
            return 22;
        case 'X':
            return 23;
        case 'Y':
            return 24;
        case 'Z':
            return 25;
    }
}

int main () {
    long long int n, i, soma;
    int l, j, tam, k;
    char vetor[51];

    scanf("%lld", &n);
    for (i=0; i<n; i++) {
        soma = 0;
        scanf("%d ", &l);
        for (j=0; j<l; j++) {
            gets(vetor);
            tam = strlen(vetor);
            for (k=0; k<tam; k++) {
                soma += pos(vetor[k]) + j + k;
            }
        }
        printf("%lld\n", soma);
    }

    return 0;
}
