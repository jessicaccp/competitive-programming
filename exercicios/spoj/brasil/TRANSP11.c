#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main () {
	int a, b, c, x, y, z;

	scanf("%d %d %d\n%d %d %d", &a, &b, &c, &x, &y, &z);
	printf("%d", ((x/a)*(y/b)*(z/c)));

	return 0;
}
