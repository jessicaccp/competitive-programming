#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.14159

int main () {
    int p, r;

    while (scanf("%d %d", &p, &r) != EOF){
        if (p==0)
            printf("C\n");
        else
            if (r==0)
                printf("B\n");
            else
                printf("A\n");
    }

    return 0;
}
