#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

int main () {
	float pa, pg, ra, rg, ma, mg;

	scanf("%f %f %f %f", &pa, &pg, &ra, &rg);
	ma = pa/ra;
	mg = pg/rg;
	if (ma<mg)
		printf("A");
	else
		printf("G");
	return 0;
}
