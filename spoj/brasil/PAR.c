#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main () {
	int n, a, b, cont=0, aux=1, i, soma[1001];
	char nome1[11], nome2[11];

	while (aux==1) {
		cont = cont +1;
		scanf("%d\n%s\n%s", &n, nome1, nome2);
		if (n==0)
			break;
		for (i=0; i<n; i++) {
			scanf("%d %d", &a, &b);
			soma[i] = a + b;
		}
		printf("Teste %d\n", cont);
		for (i=0; i<n; i++) {
			if (soma[i]%2==0)
				printf("%s\n", nome1);
			else
				printf("%s\n", nome2);
		}
	}

	return 0;
}
