#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main () {
	int a, n, f, i, cont=0;

	scanf("%d\n%d", &a, &n);
	for (i=0; i<n; i++) {
		scanf("%d", &f);
		if ((f*a)>=40000000) {
			cont = cont + 1;
		}
	}
	printf("%d", cont);

	return 0;
}
