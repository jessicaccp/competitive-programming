#include<stdio.h>
#include<stdlib.h>
#define pi 3.14159

int main () {
    double r;

    while(scanf("%lf", &r) != EOF) {
        printf("VOLUME = %.3lf\n", (4.0/3.0)*pi*r*r*r);
    }

    return 0;
}
