#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.14159

int main () {
    char linha[101];
    int i, um=0;

    gets(linha);

    for (i=0; i<strlen(linha); i++)
        if (linha[i]=='1')
            um++;

    if (um%2==0)
        printf("%s0\n", linha);
    else
        printf("%s1\n", linha);

    return 0;
}
