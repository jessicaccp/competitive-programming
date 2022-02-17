#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define pi 3.14159

int main () {
    double fib, n;

    while (scanf("%lf", &n) != EOF) {
        fib = (pow(((1.0+sqrt(5))/2.0), n) - pow(((1.0-sqrt(5))/2.0), n))/sqrt(5);
        printf("%.1lf\n", fib);
    }

    return 0;
}
