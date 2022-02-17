#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.14159

int main () {
    char c;
    int f=0;

    while (scanf("%c", &c) != EOF) {
        // j, s, p, v, b, z, x
        if (c=='j' || c=='s' || c=='p' || c=='v' || c=='b' || c=='z' || c=='x') {
            if (f==0) {
                printf("f");
                f = 1;
            }
        }
        else {
            if (c=='J' || c=='S' || c=='P' || c=='V' || c=='B' || c=='Z' || c=='X') {
                if (f==0) {
                    printf("F");
                    f = 1;
                }
            }
            else {
                if (c=='F' || c=='f') {
                    if (f==0) {
                        printf("%c", c);
                        f = 1;
                    }
                }
                else {
                    printf("%c", c);
                    f = 0;
                }
            }
        }
    }

    return 0;
}
