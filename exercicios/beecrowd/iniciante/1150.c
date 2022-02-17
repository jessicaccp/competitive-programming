#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.14159

int main () {
    int a, b, soma, num;

    while (scanf("%d %d", &a, &b) != EOF) {
        while (b<=a)
            scanf(" %d", &b);

        soma = a;
        num = 1;
        a++;

        while (soma<=b) {
            soma+=a;
            num++;
            a++;
        }

        printf("%d\n", num);

    }

    return 0;
}
