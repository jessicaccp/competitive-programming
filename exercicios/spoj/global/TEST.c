#include<stdio.h>
#include<stdlib.h>

int main () {
    int a, b=0;

    while (scanf("%d", &a) != EOF) {
        if (a==42)
            b = 1;
        if (b==0)
            printf("%d\n", a);
    }

    return 0;
}
