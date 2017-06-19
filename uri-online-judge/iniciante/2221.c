#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.14159

int main () {
    int t, b, a, d, l, a1, d1, l1;
    double dab, gua;

    while (scanf("%d", &t) != EOF){
        while(t--) {
            scanf(" %d %d %d %d %d %d %d", &b, &a, &d, &l, &a1, &d1, &l1);
            if (l%2==0)
                dab = (a+d)/2.0+b;
            else
                dab = (a+d)/2.0;
            if (l1%2==0)
                gua = (a1+d1)/2.0+b;
            else
                gua = (a1+d1)/2.0;
            if (dab==gua)
                printf("Empate\n");
            else
                if (dab>gua)
                    printf("Dabriel\n");
                else
                    printf("Guarte\n");
        }
    }

    return 0;
}
