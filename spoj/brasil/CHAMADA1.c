#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main () {
	int n, k, i, j, contador;
	char chamada[101][21], temp[21];

	scanf("%d %d", &n, &k);
	for (i=0; i<n; i++)
		scanf("%s", chamada[i]);
	for (i=0; i<(n-1); i++) {
		for (j=i+1; j<n; j++) {
			contador = strcmp(chamada[i], chamada[j]);
 			if (contador>0) {
				strcpy(temp, chamada[i]);
				strcpy(chamada[i], chamada[j]);
				strcpy(chamada[j], temp);
			}
		}
	}
	printf("%s", chamada[k-1]);
	return 0;
}
