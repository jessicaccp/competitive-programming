#include<stdio.h>
#include<stdlib.h>

int main () {
    int num, hor;
    double val;

    while(scanf("%d %d %lf", &num, &hor, &val) != EOF) {
        printf("NUMBER = %d\n"
               "SALARY = U$ %.2lf\n", num, hor*val);
    }

    return 0;
}
