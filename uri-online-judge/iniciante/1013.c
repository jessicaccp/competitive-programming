#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.14159

int main () {
    int a, b, c;

    while(scanf("%d %d %d", &a, &b, &c) != EOF) {
        int maior = (a+b+abs(a-b))/2;
        printf("%d eh o maior\n", (maior+c+abs(maior-c))/2);
    }

    return 0;
}
