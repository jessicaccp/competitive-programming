#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.14159

int main () {
    double n;
    int n100, n50, n20, n10, n5, n2;
    int m1, m50, m25, m10, m5, m1c;

    while(scanf("%lf", &n) != EOF) {
        n*=100;
        n100 = n50 = n20 = n10 = n5 = n2 = 0;
        m1 = m50 = m25 = m10 = m5 = m1c = 0;

        while (n>=10000.0) {
            n100++;
            n-=10000.0;
        }

        while (n>=5000.0) {
            n50++;
            n-=5000.0;
        }

        while (n>=2000.0) {
            n20++;
            n-=2000.0;
        }

        while (n>=1000.0) {
            n10++;
            n-=1000.0;
        }

        while (n>=500.0) {
            n5++;
            n-=500.0;
        }

        while (n>=200.0) {
            n2++;
            n-=200.0;
        }

        while (n>=100.0) {
            m1++;
            n-=100.0;
        }

        while (n>=50.0) {
            m50++;
            n-=50.0;
        }

        while (n>=25.0) {
            m25++;
            n-=25.0;
        }

        while (n>=10.0) {
            m10++;
            n-=10.0;
        }

        while (n>=5.0) {
            m5++;
            n-=5.0;
        }

        while (n>=1.0) {
            m1c++;
            n-=1.0;
        }

        printf("NOTAS:\n"
               "%d nota(s) de R$ 100.00\n"
               "%d nota(s) de R$ 50.00\n"
               "%d nota(s) de R$ 20.00\n"
               "%d nota(s) de R$ 10.00\n"
               "%d nota(s) de R$ 5.00\n"
               "%d nota(s) de R$ 2.00\n"
               "MOEDAS:\n"
               "%d moeda(s) de R$ 1.00\n"
               "%d moeda(s) de R$ 0.50\n"
               "%d moeda(s) de R$ 0.25\n"
               "%d moeda(s) de R$ 0.10\n"
               "%d moeda(s) de R$ 0.05\n"
               "%d moeda(s) de R$ 0.01\n", n100, n50, n20, n10, n5, n2, m1, m50, m25, m10, m5, m1c);
    }

    return 0;
}
