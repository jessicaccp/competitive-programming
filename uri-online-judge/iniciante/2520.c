#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.14159

int main () {
    int n, m, poka, pokb, joga, jogb, a, mov, i, j;

    while (scanf("%d %d", &n, &m) != EOF) {
        mov = 0;
        for (i=1; i<=n; i++) {
            for (j=1; j<=m; j++) {
                scanf(" %d", &a);
                if (a==2) {
                    poka = i;
                    pokb = j;
                }
                else {
                    if (a==1) {
                        joga = i;
                        jogb = j;
                    }
                }

            }
        }
        if (joga > poka)
            mov+=joga-poka;
        else
            mov+=poka-joga;
        if (jogb > pokb)
            mov+=jogb-pokb;
        else
            mov+=pokb-jogb;
        printf("%d\n", mov);
    }

    return 0;
}
