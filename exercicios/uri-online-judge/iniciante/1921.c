#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.14159

int main () {
    long long int a;

    while (scanf("%lld", &a) != EOF){
        printf("%lld\n", (a*(a-3))/2);
    }

    return 0;
}
