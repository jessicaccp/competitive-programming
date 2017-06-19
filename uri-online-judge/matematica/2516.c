#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define pi 3.14159

int main () {
    double s, v1, v2;

    while (scanf("%lf %lf %lf", &s, &v1, &v2) != EOF) {
        if (v2>=v1)
            printf("impossivel\n");
        else
            printf("%.2lf\n", s/(v1-v2));
    }

    return 0;
}
