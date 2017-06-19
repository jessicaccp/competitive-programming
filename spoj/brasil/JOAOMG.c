#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

int main () {
	int vetor[35]={1, 9, 45, 55, 99, 297, 703, 999, 2223, 2728, 4879, 4950, 5050, 5292, 7272, 7777, 9999, 17344, 22222, 38962, 77778, 82656, 95121, 99999, 142857, 148149, 181819, 187110, 208495, 318682, 329967, 351352, 356643, 390313}, n, i, cont=0, aux=1;

	while (aux==1) {
		cont = 0;
		scanf("%d", &n);
		if (n==0)
			break;
		for (i=0; i<35; i++) {
			if (n==vetor[i])
				cont = cont + 1;
		}
		if (cont!=0)
			printf("%d: S\n", n);
		else
			printf("%d: N\n", n);
	}
	return 0;
}
