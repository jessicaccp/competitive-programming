#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main () {
	unsigned long long n;
	double raiz;
	int i, cont=0;

	scanf("%lld", &n);

	if (n==-1 || n==0 || n==1) {
		printf("nao\n");
		return 0;
	}

	n = abs(n);
	raiz = sqrt((double)n);

	for (i=1; i<=raiz; i++) {
		if (n%i==0)
			cont++;
	}

	if (cont>1)
		printf("nao\n");
	else
		printf("sim\n");

	return 0;
}
