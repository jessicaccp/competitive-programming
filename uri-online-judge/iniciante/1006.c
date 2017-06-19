#include<stdio.h>
#include<stdlib.h>

int main () {
    double a, b, c;

    while(scanf("%lf %lf %lf", &a, &b, &c) != EOF)
        printf("MEDIA = %.1lf\n", (2*a+3*b+5*c)/10);

    return 0;
}
