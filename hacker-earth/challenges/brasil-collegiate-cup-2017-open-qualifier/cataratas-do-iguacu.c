#include<stdio.h>
#include<stdlib.h>

int main () {
    int n, k, b=0, k0, kn, a, i, j, m, maiores, menores, iguais;

    /* faz a leitura de N e K e declara a matriz W com N elementos */
    scanf("%d %d", &n, &k);
    int w[n];

    /* recebe os valores da matriz W */
    for (i=0; i<n; i++)
        scanf("%d", &w[i]);

    /* B inicia-se em zero, A eh um auxiliar que ajuda na comparacao dos
        valores entre si dentro de cada possibilidade de intervalo K */
    b = 0; a = -1;
    for (i=0; i<n-k+1; i++) { /* possiveis dias para inicio do intervalo K */
        for (j=0; j<k; j++) { /* numero de dias de K */
            maiores = menores = iguais = 0;
            if (j==0) { /* no primeiro dia do possivel intervalo K */
                k0 = i; /* dia 1 do intervalo */
                kn = i+k-1; /* dia final do intervalo */
                if (i==0)
                    a = -1;
                else
                    a -= k-1;
            }

            a++;
            for (m=k0; m<=kn; m++) { /* roda do inicio ao fim do possivel intervalo,
                                        compara e guarda o valor de dias de maior e menor
                                        vazao, alem dos dias iguais */
                if (w[m]>w[a])
                    maiores++;
                else
                    if (w[a]>w[m])
                        menores++;
                    else
                        iguais++;
            }
            /* para saber que achamos o valor B:
            - o numero de maiores, menores e iguais (incluindo o possivel B) deve ser igual a K;
            - o numero de maiores deve ser igual ao numero de menores
            - o possivel B deve ser maior que o B atual */
            if ((maiores+menores+iguais == k) && (maiores == menores))
                if (w[a]>b)
                    b = w[a];
        }
    }

    printf("%d\n", b);

    return 0;
}
