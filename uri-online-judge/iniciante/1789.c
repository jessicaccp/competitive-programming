#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.14159

int main () {
    int l, i, v, maior;

    while (scanf("%d", &l) != EOF) {
        maior = 0;
        for (i=0; i<l; i++) {
            scanf(" %d", &v);
            if (v>maior)
                maior = v;
        }
        if (maior>=20)
            printf("3\n");
        else
            if (maior>=10)
                printf("2\n");
            else
                printf("1\n");
    }

    return 0;
}
