#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main () {
	int vetor_e[32], vetor_d[32];
	int i, pares=0, tamanho, n;
	char pe;

	while (scanf("%d", &n) != EOF) {

		for (i=0; i<32; i++) {
			vetor_e[i] = 0;
			vetor_d[i] = 0;
		}
		pares = 0;

		for (i=0; i<n; i++) {
			scanf("%d %c", &tamanho, &pe);
			if (pe=='E')
				vetor_e[tamanho-30] = vetor_e[tamanho-30] + 1;
			else
				vetor_d[tamanho-30] = vetor_d[tamanho-30] + 1;
		}

		for (i=0; i<32; i++) {
			if (vetor_e[i] < vetor_d[i])
				pares = pares + vetor_e[i];
			else
				pares = pares + vetor_d[i];
		}
		printf("%d\n", pares);
	}

	return 0;
}
