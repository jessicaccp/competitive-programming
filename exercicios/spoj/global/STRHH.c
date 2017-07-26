#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<strings.h>

int main () {
	char a[201];
	int tam, meio, i, t, j;
	
	scanf("%d ", &t);
	for (j=0; j<t; j++) {
		gets(a);
		tam = strlen(a);
		meio = tam/2;
		for (i=0; i<meio; i++) {
			if (i%2==0)
				printf("%c", a[i]);
		}
		printf("\n");
	}
	
	return 0;
}
