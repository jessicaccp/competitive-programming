#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void zerar(int aero[]) {
	int i;

	for (i=0; i<101; i++) {
		aero[i] = 0;
	}
}

int melhor(int aero[]) {
	int i, numero;

	for (i=0; i<101; i++) {
		if (i==0)
			numero = aero[i];
		else {
			if (aero[i]>numero)
				numero = aero[i];
		}
	}
	return numero;
}

int main () {
	int a, v, x, y, aero[101], cont=0, i, aux=1, numero;

	while (aux==1) {
		cont = cont +1;
		zerar(aero);
		scanf("%d %d", &a, &v);
		if (a==0 && v==0)
			break;
		else {
			for (i=0; i<v; i++) {
				scanf("%d %d", &x, &y);
				aero[x-1] = aero[x-1] + 1;
				aero[y-1] = aero[y-1] + 1;
			}
			numero = melhor(aero);
			printf("Teste %d\n", cont);
			for (i=0; i<a; i++) {
				if (aero[i]==numero)
					printf("%d ", i+1);
			}
			printf("\n\n");		
		}
	}
	return 0;
}
