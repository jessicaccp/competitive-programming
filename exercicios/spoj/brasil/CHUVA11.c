#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main () {
	int auxiliar[101][101], soma[101][101], n, i, j, k;

	for (i=0; i<100; i++) {
		for (j=0; j<100; j++) {
			soma[i][j] = 0;
		}
	}
	scanf("%d", &n);
	for (k=0; k<2; k++) {
		for (i=0; i<n; i++) {
			for (j=0; j<n; j++) {
				scanf("%d", &auxiliar[i][j]);
			}
		}
		for (i=0; i<n; i++) {
			for (j=0; j<n; j++) {
				soma[i][j] = soma[i][j] + auxiliar[i][j];
			}
		}
	}
	for (i=0; i<n; i++) {
		for (j=0; j<n; j++) {
			if (j==(n-1))
				printf("%d\n", soma[i][j]);
			else
				printf("%d ", soma[i][j]);
		}
	}
	return 0;
}
