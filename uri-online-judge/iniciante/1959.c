#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define pi 3.14159

int main () {
    long long int a, b;

    while (scanf("%lld %lld", &a, &b) != EOF) {
        printf("%lld\n", a*b);
    }

    return 0;
}
