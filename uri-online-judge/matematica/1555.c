#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define pi 3.14159

long long int r (int x, int y) {
    return (((3*x)*(3*x))+(y*y));
}

long long int b (int x, int y) {
    return ((2*(x*x))+((5*y)*(5*y)));
}

long long int c (int x, int y) {
    return ((-100*x)+(y*y*y));
}

int main () {
    int n, x, y;

    while (scanf("%d", &n) != EOF) {
        while (n--) {
            scanf(" %d %d", &x, &y);
            if (r(x,y) > b(x,y) && r(x,y) > c(x,y))
                printf("Rafael ganhou\n");
            else
                if (b(x,y) > r(x,y) && b(x,y) > c(x,y))
                    printf("Beto ganhou\n");
                else
                    if (c(x,y) > r(x,y) && c(x,y) > b(x,y))
                        printf("Carlos ganhou\n");
        }
    }


    return 0;
}
