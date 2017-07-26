#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

int main () {
	double ladomaior;
	int i, lado[4], aux;

	scanf("%d %d %d", &lado[0], &lado[1], &lado[2]);
	for (i=0; i<2; i++) {
		if (lado[i]>lado[i+1]) {
			aux = lado[i];
			lado[i] = lado[i+1];
			lado[i+1] = aux;
		}
	}
	ladomaior = lado[2];
	if ((lado[0]+lado[1]<lado[2]) || (lado[0]+lado[2]<lado[1]) || (lado[1]+lado[2]<lado[0]) || (lado[0]+lado[1]==lado[2])) {
		printf("n");
		return 0;
	}
	if (ladomaior<sqrt(lado[0]*lado[0]+lado[1]*lado[1])) {
		printf("a");
		return 0;
	}
	if (ladomaior>sqrt(lado[0]*lado[0]+lado[1]*lado[1])) {
		printf("o");
		return 0;
	}
	if (ladomaior==sqrt(lado[0]*lado[0]+lado[1]*lado[1])) {
		printf("r");
		return 0;
	}
	printf("n");
	return 0;
}
