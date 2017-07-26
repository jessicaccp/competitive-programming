#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define pi 3.14159

int main () {
    char nome[500];
    int n;

    while (scanf("%d ", &n) != EOF) {
        while (n--) {
            gets(nome);
            if (strcmp(nome, "Batmain") == 0)
                printf("N\n");
            else
                printf("Y\n");
        }
    }
    return 0;
}
