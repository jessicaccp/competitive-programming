#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.14159

int main () {
    double n, mai, men;

    while (scanf("%lf", &n) != EOF){
        men = n/log(n);
        mai = 1.25506*men;
        printf("%.1lf %.1lf\n", men, mai);
    }

    return 0;
}
