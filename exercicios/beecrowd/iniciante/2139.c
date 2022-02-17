#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.14159

int main () {
    int dia, mes;

    while (scanf("%d %d", &mes, &dia) != EOF){
        if (dia==25 && mes==12)
            printf("E natal!\n");
        else
            if (dia==24 && mes==12)
                printf("E vespera de natal!\n");
            else
                if (dia>25 && mes==12)
                    printf("Ja passou!\n");
                else {
                    if (mes==12)
                        printf("Faltam %d dias para o natal!\n", 25-dia);
                    if (mes==11)
                        printf("Faltam %d dias para o natal!\n", 30+25-dia);
                    if (mes==10)
                        printf("Faltam %d dias para o natal!\n", 61+25-dia);
                    if (mes==9)
                        printf("Faltam %d dias para o natal!\n", 91+25-dia);
                    if (mes==8)
                        printf("Faltam %d dias para o natal!\n", 122+25-dia);
                    if (mes==7)
                        printf("Faltam %d dias para o natal!\n", 153+25-dia);
                    if (mes==6)
                        printf("Faltam %d dias para o natal!\n", 183+25-dia);
                    if (mes==5)
                        printf("Faltam %d dias para o natal!\n", 214+25-dia);
                    if (mes==4)
                        printf("Faltam %d dias para o natal!\n", 244+25-dia);
                    if (mes==3)
                        printf("Faltam %d dias para o natal!\n", 275+25-dia);
                    if (mes==2)
                        printf("Faltam %d dias para o natal!\n", 304+25-dia);
                    if (mes==1)
                        printf("Faltam %d dias para o natal!\n", 335+25-dia);
                }
    }

    return 0;
}
