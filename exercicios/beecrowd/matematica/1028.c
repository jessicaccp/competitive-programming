#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.14159

int main () {
    int n, f1, f2, resto;

    scanf("%d", &n);
    while (n--) {
        scanf(" %d %d", &f1, &f2);

        if (f1>f2) {
            resto = f1%f2;
            while (resto!=0) {
                f1 = f2;
                f2 = resto;
                resto = f1%f2;
            }
            printf("%d\n", f2);
        }
        else {
            resto = f2%f1;
            while (resto!=0) {
                f2 = f1;
                f1 = resto;
                resto = f2%f1;
            }
            printf("%d\n", f1);
        }
    }
    return 0;
}
