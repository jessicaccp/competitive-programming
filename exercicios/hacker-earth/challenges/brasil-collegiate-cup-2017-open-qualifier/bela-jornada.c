#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main () {
    long long int n, i, aux;

    scanf("%lld", &n);
    long long int array[n], soma=0, s1, s2, soma1, soma2;

    for (i=0; i<n; i++) {
        scanf("%lld", &array[i]);
        soma += array[i];
    }

    s1 = soma1 = 0;
    s2 = soma2 = soma;

    for (i=0; i<n; i++) {
        soma1 += array[i];
        soma2 -= array[i];

        if (soma1*soma2 <= s1*s2) {
            printf("%lld\n", s1*s2);
            return 0;
        }
        else {
            s1 = soma1;
            s2 = soma2;
        }
    }

    return 0;
}
