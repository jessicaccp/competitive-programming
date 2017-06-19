#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main () {
	int n, movimentos, cont=0, aux=1, i;

	while (aux==1) {
		movimentos = 1;
		cont = cont +1;
		scanf("%d", &n);
		if (n==0)
			break;
		printf("Teste %d\n", cont);
		for (i=0; i<n; i++)
			movimentos = movimentos*2;
		printf("%d\n\n", (movimentos-1));
	}
	return 0;
}
