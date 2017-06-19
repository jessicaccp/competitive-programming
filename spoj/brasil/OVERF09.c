#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main () {
	int n, p, q;
	char c;

	scanf("%d\n%d %c %d", &n, &p, &c, &q);
	if (c=='+') {
		if ((p+q)>n)
			printf("OVERFLOW");
		else
			printf("OK");
	}
	if (c=='*') {
		if ((p*q)>n)
			printf("OVERFLOW");
		else
			printf("OK");
	}

	return 0;
}
