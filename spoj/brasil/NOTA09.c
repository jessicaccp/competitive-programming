#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main () {
	int n;

	scanf("%d", &n);
	if (n==0)
		printf("E");
	if ((n>0) && (n<36))
		printf("D");
	if ((n>35) && (n<61))
		printf("C");
	if ((n>60) && (n<86))
		printf("B");
	if (n>85)
		printf("A");

	return 0;
}
