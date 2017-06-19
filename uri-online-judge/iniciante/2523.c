#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define pi 3.14159

int main () {
    char vetor[30];
    long long int lamp, i, j;

    while (scanf("%s %lld ", &vetor, &lamp) != EOF) {
        while (lamp--) {
            scanf("%lld", &i);
            printf("%c", vetor[i-1]);
        }
        printf("\n");
    }

    return 0;
}
