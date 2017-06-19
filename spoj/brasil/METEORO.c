#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main () {
	int x1, y1, x2, y2, n, cont=0, aux=1, i, x, y, cont2;

	while (aux==1) {
		cont2=0;
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		if ((x1==y1) && (x1==y2) && (x1==x2))
			break;
		cont = cont + 1;
		scanf("%d", &n);
		for (i=0; i<n; i++) {
			scanf("%d %d", &x, &y);
			if ((x>=x1) && (x<=x2) && (y<=y1) && (y>=y2))
				cont2 = cont2 + 1;
		}
		printf("Teste %d\n%d\n\n", cont, cont2);
	}

	return 0;
}
