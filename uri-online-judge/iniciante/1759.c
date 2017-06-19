#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.14159

int main () {
    long long int n, i;

    while (scanf("%lld", &n) != EOF) {
        for (i=0; i<n; i++)
            if (i==n-1)
                printf("Ho!\n");
            else
                printf("Ho ");
    }

    return 0;
}
