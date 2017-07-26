#include<stdio.h>
#include<stdlib.h>
#define pi 3.14159

int main () {
    double a;

    while(scanf("%lf", &a) != EOF)
        printf("A=%.4lf\n", a*a*pi);

    return 0;
}
