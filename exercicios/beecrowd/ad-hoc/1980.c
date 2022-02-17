#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define pi 3.14159

int main () {
    char linha[20];
    int i, tam;
    long long int fat;

    while (scanf("%s", &linha) != EOF) {
        if (strcmp(linha, "0") == 0)
            return 0;
        tam = strlen(linha);
        if (tam==1)
            fat = 1;
        else
            if (tam==2)
                fat = 2;
            else
                if (tam==3)
                    fat = 6;
                else
                    if (tam==4)
                        fat = 24;
                    else
                        if (tam==5)
                            fat = 120;
                        else
                            if (tam==6)
                                fat = 720;
                            else
                                if (tam==7)
                                    fat = 5040;
                                else
                                    if (tam==8)
                                        fat = 40320;
                                    else
                                        if (tam==9)
                                            fat = 362880;
                                        else
                                            if (tam==10)
                                                fat = 3628800;
                                            else
                                                if (tam==11)
                                                    fat = 39916800;
                                                else
                                                    if (tam==12)
                                                        fat = 479001600;
                                                    else
                                                        if (tam==13)
                                                            fat = 6227020800;
                                                        else
                                                            if (tam==14)
                                                                fat = 87178291200;
                                                            else
                                                                if (tam==15)
                                                                    fat = 1307674368000;

        printf("%lld\n", fat);
    }

    return 0;
}
