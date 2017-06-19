#include<stdio.h>
#include<stdlib.h>
#include<strings.h>

int main () {
    int cod1, cod2, num1, num2;
    double val1, val2;

    while(scanf("%d %d %lf %d %d %lf", &cod1, &num1, &val1, &cod2, &num2, &val2) != EOF) {
        printf("VALOR A PAGAR: R$ %.2lf\n", num1*val1+num2*val2);
    }

    return 0;
}
