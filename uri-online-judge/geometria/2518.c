#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define pi 3.14159

int main () {
    double d, a, l, c, x, area;

    while (scanf("%lf %lf %lf %lf", &d, &a, &c, &l) != EOF) {
        a/=100; c/=100; l/=100;
        x = sqrt(a*a + c*c);
        area = d*x*l;

        printf("%.4lf\n", area);
    }

    return 0;
}
