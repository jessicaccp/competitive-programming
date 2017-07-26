#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main () {
	int n, vetor[1001], i, tempo=0;

	scanf("%d", &n);
	for (i=0; i<n; i++) {
		scanf("%d", &vetor[i]);
		if (i==n-1)
			tempo = tempo + 10;
		if (i!=0) {
			if ((vetor[i]-vetor[i-1])<10)
				tempo = tempo + (vetor[i]-vetor[i-1]);
			else
				tempo = tempo +10;
		}
	}
	printf("%d", tempo);

	return 0;
}
