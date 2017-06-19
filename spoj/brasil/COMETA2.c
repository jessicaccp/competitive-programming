#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main () {
	int a, cometa=1986, aux=1;

	scanf("%d", &a);
	while (aux==1) {
		if (cometa>a)
			break;
		else
			cometa = cometa +76;
	}
	printf("%d", cometa);

	return 0;
}
