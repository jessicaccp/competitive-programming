#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.14159

int main () {
    long double p;

    while (scanf("%Lf", &p) != EOF){
        if (p==-1 || p==-1.0)
            return 0;
        if (p==0.0 || p==0)
            printf("0\n");
        else
            printf("%.0Lf\n", p-1.0);
    }

    return 0;
}
