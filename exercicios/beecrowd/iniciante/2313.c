#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.14159

int main () {
    long long int a, b, c, x, y, z;

    while (scanf("%lld %lld %lld", &a, &b, &c) != EOF){
        if (a>b && a>c) {
            x = a;
            if (b>c) {
                y = b;
                z = c;
            }
            else {
                y = c;
                z = b;
            }
        }
        else {
            if (b>a && b>c) {
                x = b;
                if (a>c) {
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
                if (a>b) {
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
        if (x>=y+z)
            printf("Invalido\n");
        else {
            printf("Valido-");
            if (a==b && a==c)
                printf("Equilatero\n");
            else
                if (a==b || a==c || b==c)
                    printf("Isoceles\n");
                else
                    printf("Escaleno\n");
            if (a*a==b*b+c*c)
                printf("Retangulo: S\n");
            else
                printf("Retangulo: N\n");
        }
    }

    return 0;
}
