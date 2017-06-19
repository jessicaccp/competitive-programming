#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.14159

int main () {
    int s, t, f, soma;

    while (scanf("%d %d %d", &s, &t, &f) != EOF){
        soma = s+t+f;
        if (soma>=24)
            soma-=24;
        if (soma<0)
            soma+=24;
        printf("%d\n", soma);
    }

    return 0;
}
