#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define pi 3.14159

int main () {
    long long int exp = 0, n;

    while (scanf("%lld", &n) != EOF) {
        exp++;
        if (n == -1)
            return 0;
        else
            printf("Experiment %lld: %lld full cycle(s)\n", exp, n/2);

    }

    return 0;
}
