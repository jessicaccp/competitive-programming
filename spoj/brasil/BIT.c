#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main () {
	int v, aux=1, cont=0;

	while (aux==1) {
		scanf("%d", &v);
		if (v==0)
			break;
		cont = cont + 1;
		printf("Teste %d\n", cont);
		if (v>49) {
			printf("%d ", v/50);
			v = v - 50*(v/50);
		}
		else
			printf("0 ");
		if (v>9) {
			printf("%d ", v/10);
			v = v - 10*(v/10);
		}
		else
			printf("0 ");
		if (v>4) {
			printf("%d ", v/5);
			v = v - 5*(v/5);
		}
		else
			printf("0 ");
		if (v>0)
			printf("%d\n\n", v);
		else
			printf("0\n\n");
	}

	return 0;
}
