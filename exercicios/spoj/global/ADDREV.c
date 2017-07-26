#include<stdio.h>
#include<stdlib.h>

int reverse (int a) {
    int reverse = 0;

    if (a<10)
        reverse = a;
    else {
        while (a>=1) {
            reverse = reverse*10 + a%10;
            a /= 10;
        }
    }

    return reverse;
}

int main () {
    int a, b, n;

    while (scanf("%d", &n) != EOF) {
        while (n--) {
            scanf(" %d %d", &a, &b);
            printf("%d\n", reverse(reverse(a)+reverse(b)));
        }
    }

    return 0;
}
