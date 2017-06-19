#include<stdio.h>

int main () {
	int numero, n, i;
	char sinal;
	double soma=1;

	scanf("%d", &n);
	for (i=0; i<n; i++){
		scanf("%d %c", &numero, &sinal);
			if (sinal=='*') {
				soma *= numero;
			}
			else {
				soma /= numero;
			}      
	}
 	printf("%.0f\n", soma);
	return 0;
}
