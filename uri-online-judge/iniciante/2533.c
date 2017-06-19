#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.14159

int main () {
    int m, i, n, c;
    double soma1, soma2;
    double ira;

    while (scanf("%d", &m) != EOF) {
        soma1 = soma2 = 0;
        ira = 0.0;

        for (i=0; i<m; i++) {
            scanf(" %d %d", &n, &c);
            soma1+=n*c;
            soma2+=c;
        }

        ira = soma1/soma2;
        ira/=100.0;

        printf("%.4lf\n", ira);
    }

    return 0;
}
