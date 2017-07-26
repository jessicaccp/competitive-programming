#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main () {
	int n, j, z, aux=1, i, diferenca, cont=0;

	while (aux==1) {
		diferenca = 0;
		cont = cont + 1;
		scanf("%d", &n);
		if (n==0)
			break;
		printf("Teste %d\n", cont);
		for (i=0; i<n; i++) {
			scanf("%d %d", &j, &z);
			diferenca = diferenca + j - z;
			printf("%d\n", diferenca);
		}
	}
	return 0;
}
			
