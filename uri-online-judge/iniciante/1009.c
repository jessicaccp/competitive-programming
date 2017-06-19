#include<stdio.h>
#include<stdlib.h>
#include<strings.h>

int main () {
    char nome[200];
    double sal, ven;

    while(scanf("%s %lf %lf", &nome, &sal, &ven) != EOF) {
        printf("TOTAL = R$ %.2lf\n", sal+15*ven/100);
    }

    return 0;
}
