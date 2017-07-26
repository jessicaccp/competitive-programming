#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main () {
	int n, m, matriz[101][101], i, j, melhor_tempo=100000001, melhor_competidor, soma;

	scanf("%d %d", &n, &m);
	for (i=0; i<n; i++) {
		soma = 0;
		for (j=0; j<m; j++) {
			scanf("%d", &matriz[i][j]);
			soma = soma + matriz[i][j];
			if (j==m-1) {
				if (soma<melhor_tempo) {
					melhor_tempo = soma;
					melhor_competidor = i+1;
				}
			}
		}
	}
	printf("%d", melhor_competidor);
	return 0;
}
