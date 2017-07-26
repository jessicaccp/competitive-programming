#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main () {
	int aux, n, m, i, j, pont[10000];

	scanf("%d %d", &n, &m);
	for (i=0; i<n; i++)
		scanf("%d", &pont[i]);

	for (i=0; i<n; i++) {
		for (j=i+1; j<n; j++) {
			if (pont[j]>pont[i]) {
				aux = pont[j];
				pont[j] = pont[i];
				pont[i] = aux;
			}
		}
	}

	for (i=0; i<m; i++) {
		printf("%d\n", pont[i]);
	}

	return 0;
}
