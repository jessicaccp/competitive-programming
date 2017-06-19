#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.14159

int main () {
    long long int n, s, b, a, s1, b1, a1, ss, sb, sa, ss1, sb1, sa1;
    char nome[500];

    while (scanf("%lld", &n) != EOF){
        ss = sb = sa = ss1 = sb1 = sa1 = 0;

        while (n--) {
            scanf(" %s %lld %lld %lld %lld %lld %lld", &nome, &s, &b, &a, &s1, &b1, &a1);
            ss+=s;
            sb+=b;
            sa+=a;
            ss1+=s1;
            sb1+=b1;
            sa1+=a1;
        }
        printf("Pontos de Saque: %.2lf %%.\n"
               "Pontos de Bloqueio: %.2lf %%.\n"
               "Pontos de Ataque: %.2lf %%.\n", ss1*100.0/ss, sb1*100.0/sb, sa1*100.0/sa);

    }

    return 0;
}
