#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main () {
	int r, a, b, aux=1, conta=0, contb=0, i, cont=0;
	
	while (aux==1) {
		cont = cont + 1;
		conta = 0; contb = 0;
		scanf("%d", &r);
		if (r==0)
			break;
		for (i=0; i<r; i++) {
			scanf("%d %d", &a, &b);
			conta = conta + a;
			contb = contb + b;
		}
		printf("Teste %d\n", cont);
		if (conta>contb)
			printf("Aldo\n\n");
		else
			printf("Beto\n\n");
	}

	return 0;
}
