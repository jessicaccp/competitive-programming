#include<stdio.h>
#include<stdlib.h>

int main () {
    int a, b, c, d;

    while(scanf("%d %d %d %d", &a, &b, &c, &d) != EOF)
        printf("DIFERENCA = %d\n", a*b-c*d);

    return 0;
}
