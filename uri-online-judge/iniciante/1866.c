#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.14159

int main () {
    int n, i, x;

    while (scanf("%d", &n) != EOF) {
        for (i=0; i<n; i++) {
            scanf(" %d", &x);
            if (x%2==0)
                printf("0\n");
            else
                printf("1\n");
        }
    }

    return 0;
}
