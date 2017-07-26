#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.14159

int main () {
    double a, b, c, x, y, z;

    while(scanf("%lf %lf %lf", &a, &b, &c) != EOF) {
        if (a>=b && a>=c) {
            x = a;
            if (b>=c) {
                y = b;
                z = c;
            }
            else {
                y = c;
                z = b;
            }
        }
        else {
            if (b>=a && b>=c) {
                x = b;
                if (a>=c) {
                    y = a;
                    z = c;
                }
                else {
                    y = c;
                    z = a;
                }
            }
            else {
                x = c;
                if (a>=b) {
                    y = a;
                    z = b;
                }
                else {
                    y = b;
                    z = a;
                }
            }
        }

        a = x;
        b = y;
        c = z;

        if (a>=b+c)
            printf("NAO FORMA TRIANGULO\n");
        else {
            if (a*a == b*b+c*c)
                printf("TRIANGULO RETANGULO\n");
            else
                if (a*a > b*b+c*c)
                    printf("TRIANGULO OBTUSANGULO\n");
                else
                    printf("TRIANGULO ACUTANGULO\n");
            if (a==b && a==c)
                printf("TRIANGULO EQUILATERO\n");
            else
                if (a==b || a==c || b==c)
                    printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}
