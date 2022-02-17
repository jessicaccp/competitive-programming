#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.14159

int main () {
    int a, b, i;

    while (scanf("%d", &i) != EOF) {
        while (i--) {
            scanf(" %d %d", &a, &b);
            printf("%d\n", a+b);
        }
    }

    return 0;
}
