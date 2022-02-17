#include<stdio.h>
#include<stdlib.h>
#define pi 3.14159

int main () {
    double a, b, c;

    while(scanf("%lf %lf %lf", &a, &b, &c) != EOF) {
        printf("TRIANGULO: %.3lf\n"
               "CIRCULO: %.3lf\n"
               "TRAPEZIO: %.3lf\n"
               "QUADRADO: %.3lf\n"
               "RETANGULO: %.3lf\n", a*c/2, pi*c*c, (a+b)*c/2, b*b, a*b);
    }

    return 0;
}
