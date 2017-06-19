#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main () {
	int metros, valor=0;

	scanf("%d", &metros);
	if (metros<11)
		valor = 7;
	if ((metros>10) && (metros<31))
		valor = 7 + (metros-10)*1;
	if ((metros>30) && (metros<101))
		valor = 27 + (metros-30)*2;
	if (metros>100)
		valor = 167 + (metros-100)*5;
	printf("%d", valor);

	return 0;
}
