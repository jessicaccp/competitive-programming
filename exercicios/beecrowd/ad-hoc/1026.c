#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main () {
	int a, b;
	
	while (scanf("%u %u", &a, &b) != EOF)
		printf("%u\n", a^b);

	return 0;
}
