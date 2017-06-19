#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define MAX 10000

int main () {
	int aux=1, cont=1, i, n, teste[MAX];

	while (aux=1) {
		scanf("%d", &n);
		if (n==0)
			break;
		else {
			for (i=0; i<n; i++)
				scanf("%d", &teste[i]);
			printf("Teste %d\n", cont);
			for (i=0; i<n; i++) {
				if (teste[i]==i+1)
					printf("%d\n\n", teste[i]);
			}
			cont = cont + 1;
		}
	}
	return 0;
}
