#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

int main () {
	int a, l, p, r;
	double diagonal;

	scanf("%d %d %d %d", &l, &a, &p, &r);
	diagonal = sqrt(a*a + p*p + l*l)/2;
	if (diagonal>r)
		printf("N");
	else
		printf("S");

	return 0;
}
