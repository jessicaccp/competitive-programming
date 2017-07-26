#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main () {
    int vetor[8], p1, p2, p3, p4, gan1=0, gan2=0, i, g1, g2;

    for (i=0; i<8; i++) {
        scanf("%d", &vetor[i]);
    }

    /* Performance de cada time inicialmente */
    p1 = vetor[0]+vetor[1];
    p2 = vetor[2]+vetor[3];
    p3 = vetor[4]+vetor[5];
    p4 = vetor[6]+vetor[7];

    /* Partida 1 */
    if (p1>=p2) {
        g1 = 1;
        gan1 += p1;
        gan2 += vetor[3];
    }
    else {
        g1 = 2;
        gan1 += p2;
        gan2 += vetor[1];
    }

    /* Partida 2 */
    if (p3>=p4) {
        g2 = 3;
        gan2 += p3;
        gan1 += vetor[7];
    }
    else {
        g2 = 4;
        gan2 += p4;
        gan1 += vetor[5];
    }

    /* Partida final */
    if (gan1>=gan2)
        printf("%d\n", g1);
    else
        printf("%d\n", g2);

    return 0;
}
