#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

int main () {
	int n, m, matriz[101][101], soma[101], classif[101], i, j, aux;

	scanf("%d %d", &n, &m);
	for (i=0; i<n; i++) {
		soma[i] = 0;
		classif[i] = i+1;
		for (j=0; j<m; j++) {
			scanf("%d", &matriz[i][j]);
			soma[i] = soma[i] + matriz[i][j];
		}
	}
	for (i=0; i<n-1; i++) {
		for (j=0; j<n-1; j++) {
			if (soma[j]>soma[j+1]) {
				aux = soma[j];
				soma[j] = soma[j+1];
				soma[j+1] = aux;
				aux = classif[j];
				classif[j] = classif[j+1];
				classif[j+1] = aux;
			}
		}
	}
	printf("%d\n%d\n%d\n", classif[0], classif[1], classif[2]);
	return 0;
}
