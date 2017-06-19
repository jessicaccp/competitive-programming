#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main () {
	int n, aux=1, soma=0, i;

	while (aux==1) {
		soma = 0;
		scanf("%d", &n);
		if (n==0)
			break;
		for (i=1; i<n+1; i++) {
			soma = soma + i*i;
		}
		printf("%d\n", soma);
	}

	return 0;
}
