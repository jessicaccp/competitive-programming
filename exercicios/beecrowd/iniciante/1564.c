#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.14159

int main () {
    int n;

    while (scanf("%d", &n) != EOF) {
        if (n==0)
            printf("vai ter copa!\n");
        else
            printf("vai ter duas!\n");
    }

    return 0;
}