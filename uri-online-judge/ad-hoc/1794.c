#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define pi 3.14159

int main () {
    int n, la, lb, sa, sb;

    while (scanf("%d %d %d %d %d", &n, &la, &lb, &sa, &sb) != EOF) {
        if(n>=la && n<=lb && n>=sa && n<=sb)
            printf("possivel\n");
        else
            printf("impossivel\n");
    }

    return 0;
}
