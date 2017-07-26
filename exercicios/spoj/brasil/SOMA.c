#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main () {
	int n, x, soma=0, i;

	scanf("%d", &n);
	for (i=0; i<n; i++) {
		scanf("%d", &x);
		soma = soma + x;
	}
	printf("%d", soma);

	return 0;
}
