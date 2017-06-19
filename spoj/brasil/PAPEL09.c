#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main () {
	int c, p, f;

	scanf("%d %d %d", &c, &p, &f);
	if (c*f>p)
		printf("N");
	else
		printf("S");

	return 0;
}
