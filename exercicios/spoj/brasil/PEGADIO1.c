#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main () {
	int l, d, k, p, pedagios, valor_pedagios, valor_kms, valor_total;

	scanf("%d %d\n%d %d", &l, &d, &k, &p);
	pedagios = l/d;
	valor_pedagios = pedagios * p;
	valor_kms = l * k;
	valor_total = valor_pedagios + valor_kms;
	printf("%d", valor_total);

	return 0;
}
