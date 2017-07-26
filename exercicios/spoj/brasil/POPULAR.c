#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main () {
	int n, matriz[101][101], maior=0, aux=1, soma=0, i, j;

	while (aux==1) {
		soma = 0; maior = 0;
		scanf("%d", &n);
		if (n==0)
			break;
		for (i=0; i<n; i++) {
			for (j=0; j<n; j++) {
				scanf("%d", &matriz[i][j]);
			}
		}
		for (j=0; j<n; j++) {
			for (i=0; i<n; i++) {
				soma = soma + matriz[i][j];
				if (i==n-1) {
					if (soma>maior)
						maior = soma;
					soma = 0;
				}
			}
		}
		printf("%d\n", maior);
	}
	return 0;
}
