#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.14159

int main () {
    int a;

    while (scanf("%d", &a) != EOF) {
        if (a==1)
            printf("Top 1\n");
        else
            if (a<=3)
                printf("Top 3\n");
            else
                if (a<=5)
                    printf("Top 5\n");
                else
                    if (a<=10)
                        printf("Top 10\n");
                    else
                        if (a<=25)
                            printf("Top 25\n");
                        else
                            if (a<=50)
                                printf("Top 50\n");
                            else
                                printf("Top 100\n");

    }

    return 0;
}
