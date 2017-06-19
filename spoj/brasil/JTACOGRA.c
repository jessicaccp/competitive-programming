#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main () {
	int i, n, t, v, kms=0;

	scanf("%d", &n);
	for (i=0; i<n; i++) {
		scanf("%d %d", &t, &v);
		kms = kms + (t*v);
	}
	printf("%d", kms);

	return 0;
}
