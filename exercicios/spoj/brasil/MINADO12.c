#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

int main () {
	int entrada[51], saida[51], n, i;

	scanf("%d", &n);
	for (i=0; i<n; i++)
		scanf("%d", &entrada[i]);
	for (i=0; i<n; i++) {
		saida[i] = 0;
		if (i==0) {
			if (entrada[i]==1)
				saida[i] = saida[i] + 1;
			if (entrada[i+1]==1)
				saida[i] = saida[i] + 1;
		}
		else {
			if (i==n-1) {
				if (entrada[i-1]==1)
					saida[i] = saida[i] + 1;
				if (entrada[i]==1)
					saida[i] = saida[i] + 1;
			}
			else {
				if (entrada[i-1]==1)
					saida[i] = saida[i] + 1;
				if (entrada[i]==1)
					saida[i] = saida[i] + 1;
				if (entrada[i+1]==1)
					saida[i] = saida[i] + 1;
			}
		}
	}
	for (i=0; i<n; i++)
		printf("%d\n", saida[i]);
	return 0;
}
