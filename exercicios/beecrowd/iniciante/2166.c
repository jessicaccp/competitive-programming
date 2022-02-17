#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.14159

int main () {
    int n, t;
    double num;

    while (scanf("%d", &n) != EOF){
        num = 2.0;
        t = n;
        if (n>0)
            n--;
        while (n--) {
            num = 2.0 + 1.0/num;
        }
        if (t==0)
            printf("%.10lf\n", 1.0);
        else
            printf("%.10lf\n", 1.0+1.0/num);
    }

    return 0;
}
