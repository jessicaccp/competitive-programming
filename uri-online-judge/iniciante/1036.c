#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.14159

int main () {
    double a, b, c, delta, x1, x2;

    while(scanf("%lf %lf %lf", &a, &b, &c) != EOF) {
        delta = b*b-4.0*a*c;
        if (delta<0.0 || a==0.0)
            printf("Impossivel calcular\n");
        else {
            x1 = (-b+sqrt(delta))/(2*a);
            x2 = (-b-sqrt(delta))/(2*a);
            printf("R1 = %.5lf\n"
                   "R2 = %.5lf\n", x1, x2);
        }
    }

    return 0;
}
