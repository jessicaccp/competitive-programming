#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main () {
	char v[501];
	
	gets(v);
	if (strlen(v) <= 80)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}
