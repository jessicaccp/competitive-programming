#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    long long int res = 1;
    int a, n;
    
    scanf("%d", &n);
    while (n--) {
        scanf(" %d", &a);
        res = (res*a)%1000000007;
    }
    printf("%lld\n", res);
    
    return 0;
}
