#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char s[101];
    int tam, i, j, pali;
    
    gets(s);
    tam = strlen(s);
    i = 0; j = tam-1;
    
    while (i<=j) {
        if (s[i] == s[j])
            pali = 1;
        else {
            pali = 0;
            break;
        }
        i++;
        j--;
    }
    
    if (pali==1)
        printf("YES\n");
    else
        printf("NO\n");
    
    return 0;
}
