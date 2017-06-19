#include<stdio.h>
#include<stdlib.h>

int main () {
    double a, b;

    while(scanf("%lf %lf", &a, &b) != EOF)
        printf("MEDIA = %.5lf\n", (3.5*a+7.5*b)/11);

    return 0;
}
