#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main () {
	int x1, x2, y1, y2, aux=1, cont=0, mov;

	while (aux==1) {
		cont=0;
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		if (x1==0 && x2==0 && y1==0 && y2==0)
			break;
		if (x1==x2 && y1==y2 && cont==0) {
			mov = 0; cont = 1; }
		if ((x1==x2 || y1==y2) && cont==0) {
			mov = 1; cont = 1; }
		if (((x2-x1 == y2-y1) || (x2-x1 == y1-y2) || (x1-x2 == y2-y1) || (x1-x2 == y1-y2)) && cont==0) {
			mov = 1; cont = 1; }
		if (cont==0)
			mov = 2;
		printf("%d\n", mov);
	}
	return 0;
}
