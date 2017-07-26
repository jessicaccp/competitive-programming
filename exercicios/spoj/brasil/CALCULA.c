#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main () {
	int m, numero, soma=0, cont=0, aux=1, i;
	char sinal;

	while (aux==1) {
		soma=0; cont = cont +1;
		scanf("%d", &m);
		if (m==0)
			break;
		for (i=0; i<m; i++) {
			if (i==0) {
				scanf("%d", &numero);
				soma = numero;
			}
			else {
				scanf("%c%d", &sinal, &numero);
				if (sinal=='+')
					soma = soma + numero;
				else
					soma = soma - numero;
			}
		}
		printf("Teste %d\n%d\n\n", cont, soma);
	}
	return 0;
}
