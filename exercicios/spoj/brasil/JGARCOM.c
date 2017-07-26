#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main () {
	int n, l, c, quebrados=0, i;

	scanf("%d", &n);
	for (i=0; i<n; i++) {
		scanf("%d %d", &l, &c);
		if (l>c)
			quebrados = quebrados + c;
	}
	printf("%d", quebrados);

	return 0;
}
