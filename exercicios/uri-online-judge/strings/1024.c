#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.14159

int main () {
    char m[1001], passo1[1001], passo2[1001], passo3[1001];
    int n, tam, i, j, metade;

        scanf("%d ", &n);
        while (n--) {
            gets(m);
            tam = strlen(m);
            j = tam-1;
            metade = tam/2;

            for (i=0; i<tam; i++) {
                passo1[i] = m[i];
                if ((passo1[i]>=65 && passo1[i]<=90) || (passo1[i]>=97 && passo1[i]<=122)) {
                    passo1[i]+=3;
                }

                passo2[j] = passo1[i];
                passo3[j] = passo2[j];
                if (j>=metade)
                    passo3[j]-=1;
                j--;
            }
            passo1[tam] = '\0';
            passo2[tam] = '\0';
            passo3[tam] = '\0';

            printf("%s\n", passo3);
        }

    return 0;
}
