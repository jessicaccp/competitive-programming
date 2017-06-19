#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main () {
    int valor[16]={4,9,25,81,289,1089,4225,16641,66049,263169,1050625,4198401,16785409,67125249,268468225,1073807361};
	int n, aux=1, cont=0;

	while (aux==1) {
		cont = cont +1;
		scanf("%d", &n);
		if (n==(-1))
			break;
		printf("Teste %d\n%d\n\n", cont, valor[n]);
	}
	return 0;
}
