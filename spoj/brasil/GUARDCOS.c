#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
 
/* Função principal */
int main () {
    int d, vf, vg;
    double dist, tf, tg;
 
    while (scanf("%d %d %d", &d, &vf, &vg) != EOF) {
        dist = sqrt(12*12+d*d);
        tf = 12.0/vf;
        tg = dist/vg;
        if (tf>=tg)
            printf("S\n");
        else
            printf("N\n");
    }
 
    return 0;
}
