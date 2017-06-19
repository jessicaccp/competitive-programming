#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[101];
    int tam, i=0;
    
    gets(s);
    tam = strlen(s);
    
    while (tam--) {
        if (s[i]=='a')
            printf("A");
        else if (s[i]=='b')
            printf("B");
        else if (s[i]=='c')
            printf("C");
        else if (s[i]=='d')
            printf("D");
        else if (s[i]=='e')
            printf("E");
        else if (s[i]=='f')
            printf("F");
        else if (s[i]=='g')
            printf("G");
        else if (s[i]=='h')
            printf("H");
        else if (s[i]=='i')
            printf("I");
        else if (s[i]=='j')
            printf("J");
        else if (s[i]=='k')
            printf("K");
        else if (s[i]=='l')
            printf("L");
        else if (s[i]=='m')
            printf("M");
        else if (s[i]=='n')
            printf("N");
        else if (s[i]=='o')
            printf("O");
        else if (s[i]=='p')
            printf("P");
        else if (s[i]=='q')
            printf("Q");
        else if (s[i]=='r')
            printf("R");
        else if (s[i]=='s')
            printf("S");
        else if (s[i]=='t')
            printf("T");
        else if (s[i]=='u')
            printf("U");
        else if (s[i]=='v')
            printf("V");
        else if (s[i]=='w')
            printf("W");
        else if (s[i]=='x')
            printf("X");
        else if (s[i]=='y')
            printf("Y");
        else if (s[i]=='z')
            printf("Z");
        else if (s[i]=='A')
            printf("a");
        else if (s[i]=='B')
            printf("b");
        else if (s[i]=='C')
            printf("c");
        else if (s[i]=='D')
            printf("d");
        else if (s[i]=='E')
            printf("e");
        else if (s[i]=='F')
            printf("f");
        else if (s[i]=='G')
            printf("g");
        else if (s[i]=='H')
            printf("h");
        else if (s[i]=='I')
            printf("i");
        else if (s[i]=='J')
            printf("j");
        else if (s[i]=='K')
            printf("k");
        else if (s[i]=='L')
            printf("l");
        else if (s[i]=='M')
            printf("m");
        else if (s[i]=='N')
            printf("n");
        else if (s[i]=='O')
            printf("o");
        else if (s[i]=='P')
            printf("p");
        else if (s[i]=='Q')
            printf("q");
        else if (s[i]=='R')
            printf("r");
        else if (s[i]=='S')
            printf("s");
        else if (s[i]=='T')
            printf("t");
        else if (s[i]=='U')
            printf("u");
        else if (s[i]=='V')
            printf("v");
        else if (s[i]=='W')
            printf("w");
        else if (s[i]=='X')
            printf("x");
        else if (s[i]=='Y')
            printf("y");
        else if (s[i]=='Z')
            printf("z");
        else
            printf("%c", s[i]);
        i++;
        if (tam==0)
            printf("\n");
    }
}
