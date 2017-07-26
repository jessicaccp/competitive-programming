#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

int main () {
	int n, matriz[1001][1001], soma1=0, somaauxlinha, somaauxcoluna, somaauxdiagonal1=0, somaauxdiagonal2=0, i, j, identificador=1, cont=0, vetor[1000001], aux;

	scanf("%d", &n);
	for (i=0; i<n; i++) {
		for (j=0; j<n; j++) {
			scanf("%d", &matriz[i][j]);
			vetor[cont] = matriz[i][j];
			cont = cont +1;
			if (i==0)
				soma1 = soma1 + matriz[i][j];
			if (matriz[i][j]<1 || matriz[i][j]>n*n)
				identificador = 0;
		}
	}
	if (identificador==0) {
		printf("0");
		return 0;
	}
	// verificar linhas e colunas e diagonais
	for (i=0; i<n; i++) {
		somaauxlinha = 0;
		somaauxcoluna = 0;
		for (j=0; j<n; j++) {
			if (i<n-1 && j<n-1) {
				if (vetor[j]>vetor[j+1]) {
					aux = vetor[j];
					vetor[j] = vetor[j+1];
					vetor[j+1] = aux;
				}
				if (vetor[j]==vetor[j+1]) {
					printf("0");
					return 0;
				}
			}
			somaauxlinha = somaauxlinha + matriz[i][j];
			somaauxcoluna = somaauxcoluna + matriz[j][i];
			if (i==j)
				somaauxdiagonal1 = somaauxdiagonal1 + matriz[i][j];
			if (j==n-1) {
				somaauxdiagonal2 = somaauxdiagonal2 + matriz[i][n-j-1];
				if (somaauxlinha!=soma1 || somaauxcoluna!=soma1 || (i==n-1 && somaauxdiagonal1!=soma1) || (i==n-1 && somaauxdiagonal2!=soma1)) {
					printf("0");
					return 0;
				}
			}
		}
	}
	printf("%d", soma1);
	return 0;
}
