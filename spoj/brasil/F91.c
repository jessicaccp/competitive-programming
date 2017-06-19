#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int f91(int);

int main () {
	int aux=1, n, resultado;

	while (aux==1) {
		scanf("%d", &n);
		if (n==0)
			break;
		if (n<=100)
			resultado = f91(f91(n+11));
		if (n>=101)
			resultado = n-10;
		printf("f91(%d) = %d\n", n, resultado);
	}

	return 0;
}

int f91 (int n) {
	int resultado;

	if (n<=100)
		resultado = f91(f91(n+11));
	if (n>=101)
		resultado = n-10;

	return resultado;
}
