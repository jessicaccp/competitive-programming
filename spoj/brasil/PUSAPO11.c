#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

int main () {
	int n, m, p, d, i, j, vetor[101];

	for (i=0; i<100; i++)
		vetor[i]=0;

	scanf("%d %d", &n, &m);
	for (i=0; i<m; i++) {
		scanf("%d %d", &p, &d);
		vetor[p-1]=1;
		for (j=p-1; j<n; j=j+d)
			vetor[j]=1;
		for (j=p-1; j>=0; j=j-d)
			vetor[j]=1;
	}
	for (i=0; i<n; i++)
		printf("%d\n", vetor[i]);

	return 0;
}
