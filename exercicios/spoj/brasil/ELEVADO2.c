#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main () {
	int n, c, s, e, aux=1, i, pop=0, cont=0;

	scanf("%d %d", &n, &c);
	for (i=0; i<n; i++) {
		scanf("%d %d", &s, &e);
		pop = pop - s + e;
		if (pop > c)
			cont=1;
	}
	if (cont==1)
		printf("S");
	else
		printf("N");

	return 0;
}
