#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.14159

int main () {
    long long int n, u, r, i, su, sr, si;

    while (scanf("%lld", &n) != EOF) {
        if (n==0)
            return 0;

        su = sr = si = 0;
        while (n--) {
            scanf("%lld %lld %lld", &u, &r, &i);
            if (u==1 || u==2 || u==4 || u==8 || u==16 || u==32 || u==64 || u==128 || u==256 || u==512 || u==1024 || u==2048 || u==4096 || u==8192 || u==16384 || u==32768 || u==65536 || u==131072 || u==262144 || u==524288 || u==1048576 || u==2097152 || u==4194304 || u==8388608 || u==16777216 || u==33554432 || u==67108864 || u==134217728 || u==268435456 || u==536870912) {
                su++;
                if (u>r && u>i)
                    su++;
            }
            if (r==1 || r==2 || r==4 || r==8 || r==16 || r==32 || r==64 || r==128 || r==256 || r==512 || r==1024 || r==2048 || r==4096 || r==8192 || r==16384 || r==32768 || r==65536 || r==131072 || r==262144 || r==524288 || r==1048576 || r==2097152 || r==4194304 || r==8388608 || r==16777216 || r==33554432 || r==67108864 || r==134217728 || r==268435456 || r==536870912) {
                sr++;
                if (r>u && r>i)
                    sr++;
            }
            if (i==1 || i==2 || i==4 || i==8 || i==16 || i==32 || i==64 || i==128 || i==256 || i==512 || i==1024 || i==2048 || i==4096 || i==8192 || i==16384 || i==32768 || i==65536 || i==131072 || i==262144 || i==524288 || i==1048576 || i==2097152 || i==4194304 || i==8388608 || i==16777216 || i==33554432 || i==67108864 || i==134217728 || i==268435456 || i==536870912) {
                si++;
                if (i>u && i>r)
                    si++;
            }
        }
        if ((su==sr && su>=si) || (su==si && su>=sr) || (sr==si && sr>=su))
            printf("URI\n");
        else
            if (su>sr && su>si)
                printf("Uilton\n");
            else
                if (sr>su && sr>si)
                    printf("Rita\n");
                else
                    printf("Ingred\n");
    }

    return 0;
}
