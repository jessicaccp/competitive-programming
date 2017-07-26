#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main () {
	int n, a, l, p;

	scanf("%d\n%d %d %d", &n, &a, &l, &p);
	if ((a<n) || (l<n) || (p<n))
		printf("N");
	else
		printf("S");

	return 0;
}
